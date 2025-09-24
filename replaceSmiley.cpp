
// https://app.programiz.pro/community-challenges/challenge/cpp-smiley-faces
#include <iostream>
using namespace std;

string replaceSmiley(const string& input) 
{
    string output = "";
    for(char c: input)
    {
        if (c == ')')
            c = '(';
        output += c;
    }
    return output;
}

int main()
{
    cout << replaceSmiley(":) :) :) All smiles here :)") << "\n";
    return 0;
}