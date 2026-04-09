#include <iostream>
using namespace std;

void printNumbers(int n)
{
    //1 2 3 4
    if(n < 1)return;
    printNumbers(n - 1);
    cout << n << " ";

}

int main()
{
    int n;
    cin >> n;
    printNumbers(n);
    return 0;
}


