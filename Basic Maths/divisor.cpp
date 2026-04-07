#include <iostream>
using namespace std;

void printDivisor(int n)
{
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            
            if(i != n / i)  // Avoid duplicate for perfect squares
            {
                cout << n / i << " ";
            }
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