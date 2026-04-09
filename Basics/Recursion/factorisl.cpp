#include <iostream>
using namespace std;

int calFactorial(int n)
{
    if(n <= 1) return 1;
    return calFactorial(n - 1) * n;
}

int main()
{
    int n; 
    cin >> n;
    cout << calFactorial(n);
    return 0;
}

