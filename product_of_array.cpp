// https://www.google.com/search?q=https://app.programiz.pro/community-challenges/preview/cpp-product-of-array/info

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> arr = {1, 2, 3, 4};
    int product = 1;
    for (int num : arr) {
        product *= num;
    }
    cout << "Product of array = " << product << endl;
    return 0;
}