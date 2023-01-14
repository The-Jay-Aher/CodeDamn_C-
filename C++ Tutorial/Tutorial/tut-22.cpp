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
    sort(vecVals.begin(), vecVals.end(), [](int x, int y)
         { return x > y; });

    for (auto x : vecVals)
    {
        cout << x << endl;
    }
    cout << endl;
    vector<int> evenVecVals;
    copy_if(vecVals.begin(), vecVals.end(), back_inserter(evenVecVals), [](int x)
            { return x % 2 == 0; });

    for (auto x : evenVecVals)
    {
        cout << x << endl;
    }
    cout << endl;
    int sum = 0;

    for_each(vecVals.begin(), vecVals.end(), [&](int x)
             { sum += x; });

    cout << sum << endl;

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
