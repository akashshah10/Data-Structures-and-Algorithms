#include <iostream>
using namespace std;

void printNumbers(int n)
{
    //1 2 3 4
    // if(n < 1)return;
    // printNumbers(n - 1);
    // cout << n << " ";

    //4 3 2 1
    if(n < 1)return;
    cout << n << " ";
    printNumbers(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printNumbers(n);
    return 0;
}


