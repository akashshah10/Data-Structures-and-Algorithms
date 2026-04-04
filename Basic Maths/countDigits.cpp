#include <iostream>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while(n > 0)
    {
        count ++;
        n /= 10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Number of digits: " << countDigit(n);
    return 0;
}