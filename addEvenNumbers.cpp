// https://app.programiz.pro/community-challenges/challenge/cpp-add-even-numbers

#include <iostream>
using namespace std;

int addEvenNumbers(int n) 
{
    int sum = 0;
    for (int i = 0; i <= n; i += 2)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << addEvenNumbers(10) << "\n";
    return 0;
}