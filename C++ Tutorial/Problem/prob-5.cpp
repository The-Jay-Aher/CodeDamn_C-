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

void SolveForX(string equation);

int main()
{
    // Problem: SOlve the Equation
    // x + 4 = 9 (Solve for x)
    string equation;
    cout << "Enter an Equation to Solve: ";
    getline(cin, equation);
    SolveForX(equation);

    return 0;
}

void SolveForX(string equation)
{
    vector<string> vecEquation = StringToVector(equation, ' ');
    int firstNum = stoi(vecEquation.at(2));
    int answer = stoi(vecEquation.at(4));
    cout << "The value of X is: " << answer - firstNum << endl;
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