#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<int> Range(int start, int max, int step);

int main()
{
    vector<int> range = Range(1, 10, 2);
    for (auto x : range)
    {
        cout << x << endl;
    }

    // Exceptions are errors that occur when things don't
    // go as expected
    // 1. You expect an int but get a string
    // 2. You expect a file to be available but it isn't
    // 3. You expect the user to not enter 0 but they do

    // Try - Catch - E.g. - 1
    // double num1 = 0, num2 = 0;
    // cout << "Enter number 1: ";
    // cin >> num1;
    // cout << "Enter number 2: ";
    // cin >> num2;
    // try
    // {
    //     if (num2 == 0)
    //     {
    //         throw "Division by Zero is not possible";
    //     }
    //     else
    //     {
    //         printf("%.1f / %.1f = %.2f", num1, num2, num1 / num2);
    //     }
    // }
    // catch (const char *exp)
    // {
    //     cout << "Error: " << exp << endl;
    // }

    // Try - Catch - E.g. - 2
    try
    {
        cout << "Throwing Exception" << endl;
        throw runtime_error("Error Occurred");
        cout << "Can you print me?" << endl;
    }
    // All exceptions are of the type exception
    catch (exception &exp)
    {
        // Here what() gets the Error message passed
        cout << "Handled Exception: " << exp.what() << endl;
    }

    // This will catch all the exceptions that were not caught anywhere else
    catch (...)
    {
        cout << "Default Exception Catch" << endl;
    }

    return 0;
}

vector<int> Range(int start, int max, int step)
{
    int i = start;
    vector<int> range;
    while (i <= max)
    {
        range.push_back(i);
        i += step;
    }
    return range;
}