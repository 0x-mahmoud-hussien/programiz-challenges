//https://app.programiz.pro/community-challenges/challenge/cpp-hide-credit-card

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string hideCreditCard(string str) 
{
    int keep = 4;
    int seen = 0;

    for (int i = str.size() - 1; i >= 0; --i) 
    {
        if (isdigit((unsigned char)str[i])) 
        {
            if (seen < keep) ++seen; 
            else str[i] = '*';         
        }
    }
    return str;
}

int main() 
{
    cout << hideCreditCard("1234567890123456") << "\n";
    return 0;
}