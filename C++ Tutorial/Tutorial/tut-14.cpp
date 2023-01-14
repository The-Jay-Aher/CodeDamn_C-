#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    char cString[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '\0'};
    cout << cString << endl;
    cout << "Array Size: " << sizeof(cString) << endl;

    vector<string> strVec(10);

    string str("I'm a string");
    strVec[0] = str;
    // cout << str[0] << endl;
    // cout << str.at(0) << endl;

    cout << str.front() << " " << str.back() << endl;

    cout << "Length: " << str.length() << endl;

    string str2(str);
    strVec[1] = str2;

    string str3(str, 4);
    strVec[2] = str3;

    string str4(5, 'x');
    strVec[3] = str4;

    strVec[4] = str.append(" you are not");
    str.append(" you are not");

    str.append(str, 34, 37);
    strVec[5] = str;

    str.erase(13, str.length() - 1);
    strVec[6] = str;

    for (auto x : strVec)
    {
        cout << x << endl;
    }

    if (str.find("string") != string::npos)
    {
        cout << "1st not: " << str.find("string") << endl;
    }

    cout << "Substr: " << str.substr(6, 6) << endl;

    reverse(str.begin(), str.end());
    cout << "Reverse: " << str << endl;

    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);

    cout << "Upper: " << str2 << endl;

    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    cout << "Lower: " << str2 << endl;

    char aChar = 'Z';
    int aInt = aChar;
    cout << "A Code: " << (int)'a' << endl;

    string strNum = to_string(1 + 2);
    cout << "String: " << strNum << endl;

    return 0;
}