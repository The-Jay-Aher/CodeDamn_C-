#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void assignAge3(int *pAge);

void doubleArray(int *arr, int size);

int main()
{

    // Pointer -> Looking for certain parts of the memory, looking for the certain parts of the memory.

    int age = 43;
    // When you declare a pointer give it a NULL value
    // Add a * to the variable if you want to declare a pointer
    // The datatype of the pointer variable will be same as the datatype of the variable which we are referring to
    // pAge -> pointer Age
    int *pAge = NULL;
    // Here & is a reference operator
    // It returns the address of a variable that can be stored in a pointer
    pAge = &age;

    cout << "Address: " << pAge << endl;
    // You can get the value of the variable located at the Address, by using the dereference operator
    // * is a dereference operator
    cout << "Value at Address: " << *pAge << endl;

    // int intArray[] = {1, 2, 3, 4};
    // int *pIntArray = intArray;

    // cout << "1st -> " << *pIntArray << ", Address -> " << pIntArray << endl;
    // pIntArray++;
    // cout << "2nd -> " << *pIntArray << ", Address -> " << pIntArray << endl;
    // pIntArray++;
    // cout << "3rd -> " << *pIntArray << ", Address -> " << pIntArray << endl;
    // pIntArray++;
    // cout << "4th -> " << *pIntArray << ", Address -> " << pIntArray << endl;

    assignAge3(&age);

    cout << "Pointer Age: " << age << endl;

    int arr[] = {1, 2, 3, 4};

    doubleArray(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void assignAge3(int *pAge)
{
    *pAge = 22;
}

void doubleArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}