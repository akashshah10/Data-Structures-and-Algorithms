#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDivisor(int n)
{
    vector<int> factors;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            factors.emplace_back(i);
            
            if(i != n / i)  // Avoid duplicate for perfect squares
            {
                factors.emplace_back(n/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    for(auto it: factors)
    {
        cout << it <<" ";
    }
}

int main()
{
    int n;
    cin >> n;
    printDivisor(n);
    return 0;
}