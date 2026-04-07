#include <iostream>
using namespace std;

void printDivisor(int a)
{
    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            cout << i <<" ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    printDivisor(n);
    return 0;

}