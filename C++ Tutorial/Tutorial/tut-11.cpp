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
    // Here 2 stands for the size of the predefined vector.
    vector<int> vecRandNums(2);
    vecRandNums[0] = 10;
    vecRandNums[1] = 20;

    vecRandNums.push_back(30);
    cout << "Vecor Size: " << vecRandNums.size() << endl;

    cout << "Last Index: " << vecRandNums[vecRandNums.size() - 1] << endl;

    // When we use an iterator it is going to used for cycling through a range of values
    vector<int>::iterator it;

    it = find(vecRandNums.begin(), vecRandNums.end(), 20);
    cout << *it << endl;

    string sSentence = "This is a random string";
    vector<string> vecWords;
    //  It is just an object that receives string seperated by spaces and spits them out one by one for us.
    stringstream ss(sSentence);

    string sIndivString;
    char cSpace = ' ';
    while (getline(ss, sIndivString, cSpace))
    {
        vecWords.push_back(sIndivString);
    }

    

    for (auto x : vecWords)
        cout << x << endl;  

    return 0;
}