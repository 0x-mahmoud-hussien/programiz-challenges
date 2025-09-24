
// https://app.programiz.pro/community-challenges/challenge/cpp-dashing-numbers
#include <iostream>
using namespace std;

string dashingNumbers(int num) 
{
    string snum = to_string(num);
    string result;
    
    for (int i = 0; i < snum.length(); i++) 
    {
        result += snum[i];
        if (i != snum.length() - 1)
            result += '-';
    }
    
    return result;
}

int main()
{
    cout << dashingNumbers(12345) << "\n";
    return 0;
}