
// https://app.programiz.pro/community-challenges/challenge/cpp-convert-to-titlecase
#include <iostream>
using namespace std;

string convertToTitleCase(string str) 
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    
    
    for (int i = 1; i < str.length(); i++) 
    {
        if (str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z') 
            str[i] = str[i] - 32;
    }
    
    return str;
}

int main()
{
    cout << convertToTitleCase("hello world") << "\n";
    return 0;
}