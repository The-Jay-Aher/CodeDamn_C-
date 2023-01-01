#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sMiles;
    cin >> sMiles;
    double nMiles = stod(sMiles);
    double nKilometers = nMiles * 1.60934;
    printf("%.1f miles equals %.4f kilometers", nMiles, nKilometers);
    return 0;
}