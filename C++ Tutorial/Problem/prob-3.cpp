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
    string normalStr, secretStr = "";
    cout << "Enter Uppercase String: ";
    cin >> normalStr;
    for (char c : normalStr)
    {
        secretStr += to_string((int)c);
    }
    cout << endl;
    cout << "Secret: " << secretStr << endl;

    for (int i = 0; i < secretStr.length(); i += 2)
    {
        string sCharCode = "";
        sCharCode += secretStr[i];
        sCharCode += secretStr[i + 1];

        int nCharCode = stoi(sCharCode);
        char chCharCode = nCharCode;
        normalStr += chCharCode;
    }

    cout << "Normal: " << normalStr << endl;

    return 0;
}