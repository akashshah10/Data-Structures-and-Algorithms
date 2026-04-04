#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int revNum = 0;
    while(n != 0)
    {
        revNum = (revNum * 10) + (n % 10);
        n /= 10;
    }
    return revNum;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << reverseNumber(n);

    return 0;
}