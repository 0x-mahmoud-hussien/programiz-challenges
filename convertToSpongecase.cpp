
// https://app.programiz.pro/community-challenges/challenge/cpp-convert-to-spongecase
#include <iostream>
using namespace std;

string convertToSpongecase(string str) 
{
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0)
            str[i] = tolower(str[i]);
        else
            str[i] = toupper(str[i]);
    }
    return str;
}

int main()
{
    cout << convertToSpongecase("hello world") << "\n";
    return 0;
}