#include <iostream>
using namespace std;

// Fast exponentiation (O(log n))
int power(int base, int exp)
{
    int result = 1;
    while(exp > 0)
    {
        if(exp % 2 == 1)
            result *= base;

        base *= base;
        exp /= 2;
    }
    return result;
}

// Armstrong check
bool calArmstrong(int a)
{
    if(a < 0) return false;  // optional

    int originalNum = a;
    int temp = a;
    int result = 0;
    int count = 0;

    // Step 1: count digits
    while(temp > 0)
    {
        count++;
        temp /= 10;
    }

    // Step 2: calculate sum
    temp = a;
    while(temp > 0)
    {
        int digit = temp % 10;
        result += power(digit, count);  // fast power used here
        temp /= 10;
    }

    return (result == originalNum);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(calArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0;
}