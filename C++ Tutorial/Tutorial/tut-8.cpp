#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    // srand(time(NULL));
    // int randNumb = rand() % 100;
    // int i = 1;
    // while (i != randNumb)
    // {
    //     i++;
    // }
    // cout << "The random number is: " << i << endl;

    // int j = 1;
    // while (j <= 20)
    // {
    //     if(j%2 == 0) {
    //         j++;
    //         continue;
    //     }
    //     if (j == 15)
    //     {
    //         break;
    //     }
    //     cout << j << endl;
    //     j++;
        
    // }
    
    int treeHeight;
    cout << "How tall is the tree: ";
    cin >> treeHeight;

    int spaces=  treeHeight - 1;
    int hashes = 1;
    int stumpSpaces = treeHeight - 1;

    while (treeHeight != 0)
    {
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < hashes; l++)
        {
            cout << "#";
        }
        cout << endl;
        spaces -= 1;
        hashes += 2;
        treeHeight -= 1;
        
    }
    for (int m = 0; m < stumpSpaces; m++)
    {
        cout << " ";
    }
    cout << "#" << endl;
    

    return 0;
}