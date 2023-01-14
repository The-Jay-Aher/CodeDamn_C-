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

void BubbleSort(vector<int> theVec);

int main()
{
    vector<int> vecValues;
    BubbleSort(vecValues);

    for (auto x : vecValues)
    {
        cout << x << endl;
    }

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

void BubbleSort(vector<int> theVec)
{
    int i = theVec.size() - 1;

    while (i >= 1)
    {
        int j = 0;
        while (j < i)
        {
            printf("\n\nIs %d > %d\n", theVec.at(j), theVec.at(j + 1));
            if (theVec[j] > theVec[j + 1])
            {
                cout << "Switch\n";
                int temp = theVec[j];
                theVec[j] = theVec[j + 1];
                theVec[j + 1] = temp;
            }
            else
            {
                cout << "Don't Switch" << endl;
            }
            j += 1;
        }
    }
}
