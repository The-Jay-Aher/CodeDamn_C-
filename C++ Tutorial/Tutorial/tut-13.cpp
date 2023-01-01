#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{

    int age = 43;
    int *pAge = NULL;

    // Here & is the reference operator and it returns the address or the variable.
    pAge = &age;

    cout << "Address: " << pAge << endl;

        cout << "Value at Address: " << *pAge << endl;

    return 0;
}
