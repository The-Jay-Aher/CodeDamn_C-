#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main() {

    // Intrest Rate
    float investment, interest, total;
    cout << "How much to Invest: ";
    cin >> investment;

    total = investment;

    cout << "Interest Rate: ";
    cin >> interest;
    interest = interest * 0.01;

    for (int i = 0; i < 10; i++)
    {   
        total = total + investment + (total * interest);
    }
    
    printf("Investment after 10 Years: %.2f\n", total);

    return 0;
}