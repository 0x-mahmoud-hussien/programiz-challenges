// https://app.programiz.pro/community-challenges/challenge/cpp-is-pass-or-fail
#include <iostream>
#include <string>
using namespace std;

string checkResult(int marks)
{
    if (marks >= 40) 
        return "Pass";
    else 
        return "Fail";
}

int main() 
{
    int marks = 45;
    cout << "Marks: " << marks << endl;
    cout << "Result: " << checkResult(marks) << endl;
    
    cout << "\nAdditional Tests:" << endl;
    cout << "Marks: 35 -> Result: " << checkResult(35) << endl;
    cout << "Marks: 40 -> Result: " << checkResult(40) << endl;
    cout << "Marks: 60 -> Result: " << checkResult(60) << endl;
    cout << "Marks: 25 -> Result: " << checkResult(25) << endl;
    
    return 0;
}