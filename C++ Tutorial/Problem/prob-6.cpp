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

bool isPrime(int num);

vector<int> getPrimes(int maxNum);

vector<int> generateRandVector(int numOfNums, int min, int max);

int main()
{
    // 1. Find whether a number is prime or not
    int num;
    cout << "Number To Check: ";
    cin >> num;
    // Set the bool values as true and false rather than 0 or 1.
    cout.setf(ios::boolalpha);
    cout << "Is " << num << " Prime?" << endl
         << "-> " << isPrime(num) << endl;

    // 2. List of Prime
    cout << "Generate Primes up to: ";
    int maxPrime;
    cin >> maxPrime;
    vector<int> primeList = getPrimes(maxPrime);
    for (auto x : primeList)
    {
        cout << x << endl;
    }

    // 3. Generate a Random Vector
    vector<int> vecValue = generateRandVector(10, 5, 50);
    for (auto x : vecValue)
    {
        cout << x << endl;
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

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (auto n : Range(2, num - 1, 1))
    {
        if (num % n == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> getPrimes(int maxNum)
{
    vector<int> primes;
    for (int i = 0; i < maxNum; i++)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }
    return primes;
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