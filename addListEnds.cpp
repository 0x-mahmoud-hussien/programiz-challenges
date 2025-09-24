
// https://app.programiz.pro/community-challenges/challenge/cpp-adding-array-ends
#include <iostream>
using namespace std;

int addListEnds(int arr[], int arrSize) 
{
    return arr[0] + arr[arrSize - 1];
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 20};
    cout << addListEnds(arr, 6) << "\n";
    return 0;
}