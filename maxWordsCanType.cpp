// https://app.programiz.pro/community-challenges/challenge/cpp-broken-keyboard
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int maxWordsCanType(string str, char brokenLetter) 
{
    vector<string> words;
    string current = "";
    
    for (int i = 0; i < str.length(); i++) 
    {
        if (str[i] == ' ') 
        { 
            if (!current.empty()) 
            {
                words.push_back(current);
                current = "";
            }
        } 
        else 
        {
            current += str[i];
        }
    }

    if (!current.empty()) 
        words.push_back(current);
    

    int count = 0;
    for (const string& word : words) 
    {
        bool hasBrokenLetter = false;
        
        for (char ch : word) 
        {
            if (ch == brokenLetter) 
            {
                hasBrokenLetter = true;
                break;
            }
        }
        
        if (!hasBrokenLetter) 
            count++; 
    }

    return count;
}

int main()
{
    cout << maxWordsCanType("hello world", 'd') << "\n";
    return 0;
}