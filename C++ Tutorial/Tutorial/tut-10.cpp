#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
using namespace std;

int main()
{
    int arrNums[10] = {1}; // This adds one to the 1st Index of the Array
    int arrNums2[] = {1, 2, 3};
    int arrNums3[5] = {8, 9};

    // 1st - Way
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arrNums3[i] << endl;
    // }

    // Here * is a dereference operator
    cout << "Array Size: " << sizeof(arrNums3) / sizeof(*arrNums3) << endl;

    // 2nd - Way
    for (auto x : arrNums3)
        cout << x << endl;

    int arrSize = sizeof(arrNums2) / sizeof(arrNums2[0]);
    for (int i = 0; i < arrSize; i++)
    {
        cout << arrNums2[i] << endl;
    }

    array<int, 5> arrayNums4 = {9,
                                8,
                                7,
                                6};
    for (auto j = arrayNums4.begin(); j != arrayNums4.end(); j++)
    {
        cout << " " << *j;
    }
    cout << endl;

    cout << "Size: " << arrayNums4.size() << endl;
    cout << "Max Size: " << arrayNums4.max_size() << endl;

    cout << "Empty: " << (arrayNums4.empty() ? "Yes" : "No") << endl;

    cout << "1st: " << arrayNums4[0] << endl;
    cout << "2nd: " << arrayNums4.at(1) << endl;

    arrayNums4.fill(5);

    array<int, 5> arrNums5 = {9, 8, 7, 6};

    arrNums5.swap(arrayNums4);

    for (auto x : arrNums5)
        cout << x << " ";

    int arrNums4[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    cout << arrNums4[1][1][1] << endl;

    return 0;
}