// While Loop
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    // srand(time(NULL));
    // int randNum = rand() % 100;
    // int i = 1;
    // while (i != randNum)
    // {
    //     i++;
    // }
    // cout << "The Random Number is " << i << endl;

    int j = 1;

    while (j <= 20)
    {
        if (j % 2 == 0)
        {
            j++;
            continue;
        }
        if (j == 15)
            break;
        cout << j << endl;
        j++;
    }

    return 0;
}