#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

// This is a function prototype
double addNumbers(double num1, double num2);

void assignAge(int age);

int assignAge2(int age);

int main()
{
    // double num1, num2;
    // cout << "Enter Num 1: ";
    // cin >> num1;
    // cout << "Enter Num 2: ";
    // cin >> num2;
    // printf("%.1f + %.1f = %.1f", num1, num2, addNumbers(num1, num2));

    int age = 43;
    // assignAge(age);
    assignAge2(age);
    cout << "New Age: " << assignAge2(age) << endl;

    return 0;
}

double addNumbers(double num1 = 0, double num2 = 0)
{
    return num1 + num2;
}

void assignAge(int age)
{
    age = 24;
}

int assignAge2(int age)
{
    age = 24;
    return age;
}