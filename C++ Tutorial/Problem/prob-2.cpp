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
    vector<string> vecCalc;
    string sCalc;
    double dbNum1 = 0, dbNum2 = 0;

    cout << "Enter Calculation: (ex. 5 + 6) : ";
    getline(cin, sCalc);

    stringstream ss(sCalc);
    string indivString;
    char space = ' ';

    while (getline(ss, indivString, space))
    {
        vecCalc.push_back(indivString);
    }

    dbNum1 = stod(vecCalc.at(0));
    dbNum2 = stod(vecCalc.at(2));
    string op = vecCalc.at(1);

    if (op == "+")
    {
        printf("%.1f + %.1f = %.1f ", dbNum1, dbNum2, dbNum1 + dbNum2);
    }
    else if (op == "-")
    {
        printf("%.1f - %.1f = %.1f ", dbNum1, dbNum2, dbNum1 - dbNum2);
    }
    else if (op == "*")
    {
        printf("%.1f * %.1f = %.1f ", dbNum1, dbNum2, dbNum1 * dbNum2);
    }
    else if (op == "/")
    {
        printf("%.1f / %.1f = %.1f ", dbNum1, dbNum2, dbNum1 / dbNum2);
    }

    return 0;
}