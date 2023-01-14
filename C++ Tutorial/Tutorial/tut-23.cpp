#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<int> generateRandVector(int numOfNums, int min, int max);

int main()
{
    vector<int> vecVals = generateRandVector(10, 1, 50);

    // Problem: Create a Dynamic List that are divisible by another value.
    // Solution:
    // int divisor;
    // cout << "List of Values Divisible by: ";
    // cin >> divisor;

    // vector<int> VecVals2;
    // copy_if(vecVals.begin(), vecVals.end(), back_inserter(VecVals2), [divisor](int x)
    //         { return x % divisor == 0; });

    // for (auto x : VecVals2)
    // {
    //     cout << x << endl;
    // }
    // cout << endl;

    // Problem: Multiply all values by 2
    // Solution:
    // for (auto x : vecVals)
    // {
    //     cout << x << endl;
    // }
    // cout << endl;
    // vector<int> vecVals3;
    // // wrong Method
    // // copy_if(
    // //     vecVals.begin(), vecVals.end(), back_inserter(vecVals3), [](int x)
    // //     { return x * 2; });

    // for_each(vecVals.begin(), vecVals.end(), [&](int x)
    //          { vecVals3.push_back(x * 2); });

    // for (auto x : vecVals3)
    // {
    //     cout << x << endl;
    // }

    // Problem: Recursive Lambda Function
    // Solution:
    // function<int(int)> Fib = [&Fib](int n)
    // { return n < 2 ? n : Fib(n - 1) + Fib(n - 2); };

    return 0;
}

vector<int> generateRandVector(int numOfNums, int min, int max)
{
    vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randValue = 0;
    while (i < numOfNums)
    {
        randValue = min + rand() % (max + 1 - min);
        vecValues.push_back(randValue);
        i++;
    }
    return vecValues;
}