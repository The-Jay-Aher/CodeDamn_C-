#include <bits/stdc++.h>
using namespace std;

int main()
{
    float investAmount, interestRate;
    cout << "How much to invest: ";
    cin >> investAmount;
    cout << "Interest Rate: ";
    cin >> interestRate;
    interestRate *= 0.01;
    // float finalAmount;
    float finalAmount = investAmount;

    for (int i = 0; i < 10; i++)
    {
        finalAmount = finalAmount + investAmount + finalAmount * interestRate;
    }
    cout << "The final value of investment after 10 years is: " << finalAmount << endl;
    return 0;
}