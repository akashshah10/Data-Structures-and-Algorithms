#include <iostream>
using namespace std;

int printSum(int n)
{
    if(n < 1)return 0;

    return printSum(n - 1) + n;
}

int main()
{
    int n;
    cin >> n;
    cout << printSum(n);
    return 0;
}
