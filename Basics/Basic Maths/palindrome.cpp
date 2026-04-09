// Leetcode 9
#include <iostream>
using namespace std;

bool checkPalindrome(int n)
{
    if (n < 0) return false;   // handle negative numbers

    int original = n;
    int revNum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        revNum = (revNum * 10) + digit;
        n /= 10;
    }

    return revNum == original;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (checkPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}