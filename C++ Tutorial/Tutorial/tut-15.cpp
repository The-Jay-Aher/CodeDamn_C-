#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> StringToVector(string str, char seperator);
string VectorToString(vector<string> vec, char seperator);
string TrimWhiteSpace(string theString);

int main()
{
    // 1 - Convert a String to a Vector
    string sSentence = "This is a random string";
    vector<string> vec = StringToVector(sSentence, ' ');
    for (auto x : vec)
    {
        cout << x << endl;
    }
    // 2 - Convert a Vector to a String
    vector<string> vCust(3);
    vCust[0] = "Bob";
    vCust[1] = "Sue";
    vCust[2] = "Tom";
    string sCust = VectorToString(vCust, ' ');
    cout << sCust << endl;

    // 3 - Trim whitespace from the front and back of the string
    string aString = "     asdad   asfknad   asdeqwwrw.  .      .";
    aString = TrimWhiteSpace(aString);
    cout << aString << endl;

    return 0;
}

vector<string> StringToVector(string str, char seperator)
{
    vector<string> vecWords;
    stringstream ss(str);
    string sIndivStr;
    while (getline(ss, sIndivStr, seperator))
    {
        vecWords.push_back(sIndivStr);
    }
    return vecWords;
}

string VectorToString(vector<string> vec, char seperator)
{
    string theString = "";
    for (auto x : vec)
    {
        theString += x + seperator;
    }
    return theString;
}

string TrimWhiteSpace(string theString)
{
    // find_last_not_of
    string whiteSpaces(" \t\f\v\n\r");
    theString.erase(theString.find_last_not_of(whiteSpaces) + 1);

    // find_first_not_of
    theString.erase(0, theString.find_first_not_of(whiteSpaces));
    return theString;
}