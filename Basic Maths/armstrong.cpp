#include <iostream>
#include <cmath>
using namespace std;

bool calArmstrong(int a)
{
    int originalNum = a;
    int temp = a;
    int result = 0;
    int count = 0;
    while(temp > 0)
    {
        count ++;
        temp /= 10;
    }

    while(a > 0)
    {
        int digit = a % 10;
        result += round(pow(digit, count));
        a /= 10;
    }
    if(originalNum == result) return true;
    return false;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n ;
    cout << calArmstrong(n);
    return 0;
}