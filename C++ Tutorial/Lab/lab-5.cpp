#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input investment amount, time, interest rate
    float investAmount, interestRate;
    int timePeriod;
    cin >> investAmount >> interestRate >> timePeriod;
    interestRate *= 0.01;
    float finalAmount = investAmount;

    // print the total investment after the time
    for (int i = 0; i < timePeriod; i++)
    {
        finalAmount = finalAmount + investAmount + finalAmount * interestRate;
    }
    printf("Investment After %d Years is $%.2f", timePeriod, finalAmount);
    return 0;
}
