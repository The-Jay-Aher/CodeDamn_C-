#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int Factorial(int number);
void printHorizontalVector(vector<int> theVec);
int Fib(int index);

int main()
{
    // Factorial
    cout << "Factorial of 3 = " << Factorial(3) << endl;
    // Horizontal Print
    vector<int> theVec = {10, 8, 2, 5, 9, 11, 122, 6, 14, 11};
    printHorizontalVector(theVec);

    int index;
    cout << "Get Fibonacci Index: ";
    cin >> index;
    printf("fib(%d) = %d\n", index, Fib(index));

    return 0;
}

int Factorial(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        int result = number * Factorial(number - 1);
        return result;
    }
}

void printHorizontalVector(vector<int> theVec)
{
    int dashes = ceil(theVec.size() * 5);
    for (int i = 0; i < dashes; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < theVec.size(); i++)
    {
        printf("| %2d ", i);
    }
    cout << "|" << endl;
    for (int i = 0; i < dashes; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < theVec.size(); i++)
    {
        printf("| %2d ", theVec[i]);
    }
    cout << "|" << endl;
    for (int i = 0; i < dashes; i++)
    {
        cout << "-";
    }
    cout << endl;
}

int Fib(int index)
{
    if (index < 2)
    {
        return index;
    }
    return (Fib(index - 1) + Fib(index - 2));
}
