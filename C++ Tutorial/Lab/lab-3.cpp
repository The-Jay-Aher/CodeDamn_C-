#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n < 5) {
        cout << "To young for school" << endl;
    }
    else if (n == 5)
    {
        cout << "Go to kindergarten" << endl;
    }
    else if (n > 5 && n <= 17)
    {
        cout << "Go to grade " << n - 5 << endl;
    }
    else if (n >= 18) {
        cout << "Go to college" << endl;
    }
    
    return 0;
}