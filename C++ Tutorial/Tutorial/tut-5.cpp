// For Loop
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{

    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << i << endl;
    // }

    int arr1[] = {1, 2, 3};
    int arrSize = sizeof(arr1) / sizeof(arr1[0]);

    // 1 - Normal
    // for (int i = 0; i < arrSize; i++)
    // {
    //     cout << arr1[i] << endl;
    // }

    // OR

    // 2 - Auto
    // for(auto x: arr1) {
    //     cout << x << endl;
    // }

    // OR

    // 3 - One Liner
    for (auto x : arr1)
        cout << x << endl;

    int n = 4;
    string isEven = (n % 2 == 0) ? "Even" : "Odd";
    cout << isEven << endl;

    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}