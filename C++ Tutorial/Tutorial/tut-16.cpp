#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<int> FindSubStringMatches(string theString, string seperator);
string ReplaceAllSubstrings(string theString, string substring, string newString);

int main()
{
    // 1. Find All the matches of the substring
    string phrase = "To be or not to be";
    vector<int> matches = FindSubStringMatches(phrase, "be");
    for (auto x : matches)
    {
        cout << x << endl;
    }
    // 2.  Replace all the substring matches
    cout << ReplaceAllSubstrings("to know or not to know", "know", "be") << endl;

    return 0;
}

vector<int> FindSubStringMatches(string theString, string substring)
{
    vector<int> matchingIndexes;
    int index = theString.find(substring, 0);
    while (index != string::npos)
    {
        matchingIndexes.push_back(index);
        // index++ does not always work
        index = theString.find(substring, index + 1);
    }
    return matchingIndexes;
}

string ReplaceAllSubstrings(string theString, string substring, string newString)
{
    vector<int> matches = FindSubStringMatches(theString, substring);

    if (matches.size() != 0)
    {
        int lengthDifference = newString.size() - substring.size();
        int timesLooped = 0;
        for (auto index : matches)
        {
            theString.replace(index + (timesLooped * lengthDifference), substring.size(), newString);
            timesLooped++;
        }
    }
    return theString;
}