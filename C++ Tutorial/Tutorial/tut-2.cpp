#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // string sAge = "0";
    // int nGrade = 0;
    // cout << "Enter Age: ";
    // cin >> sAge;
    // int nAge = stoi(sAge);
    // if(nAge == 5) {
    //     cout << "Go to Kindergarten";
    // }
    // else if (nAge >=6 && nAge <= 17)
    // {
    //     cout << "Go to grades " << (nGrade + nAge - 5) << endl; 
    // }
    // else if (nAge > 17)
    // {
    //     cout << "Go to college" << endl;
    // }
    // else {
    //     cout << "Too young for school" << endl;
    // }
    
    int age43 = 43;
    bool canIVote = (age43 > 18) ? true : false;
    cout.setf(ios::boolalpha);
    cout << "Can vote: " << canIVote << endl;
    
    
    return 0;
}