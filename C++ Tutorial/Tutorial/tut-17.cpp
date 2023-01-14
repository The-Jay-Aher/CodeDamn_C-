#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> StringToVector(string str, char seperator);

string CaesarCipher(string theString, int key, bool encrypt);

int main()
{
    string theString = "Make me secret";
    string encryptedString = CaesarCipher(theString, 5, true);
    string decryptedString = CaesarCipher(encryptedString, 5, false);
    cout << "Encrypted: " << encryptedString << endl;
    cout << "Decrypted: " << decryptedString << endl;
    return 0;
}

vector<string> StringToVector(string str, char seperator)
{
    vector<string> vecWords;
    stringstream ss(str);
    string sIndivStr;
    while (getline(ss, sIndivStr, seperator))
    {
        vecWords.push_back(sIndivStr);
    }
    return vecWords;
}

string CaesarCipher(string theString, int key, bool encrypt)
{
    string returnString = "";
    int charCode = 0;
    char letter;

    if (encrypt)
        key *= -1;

    for (char c : theString)
    {
        if (isalpha(c))
        {
            charCode = (int)c;
            charCode += key;

            if (isupper(c))
            {
                if (charCode > (int)'Z')
                {
                    charCode -= 26;
                }
                else if (charCode < (int)'A')
                {
                    charCode += 26;
                }
            }
            else
            {
                if (charCode > (int)'z')
                {
                    charCode -= 26;
                }
                else if (charCode < (int)'a')
                {
                    charCode += 26;
                }
            }
            letter = charCode;
            returnString += letter;
        }
        else
        {
            letter = c;
            returnString += c;
        }
    }
    return returnString;
}