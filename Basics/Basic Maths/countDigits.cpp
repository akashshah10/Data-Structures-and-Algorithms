#include <iostream>
#include <cmath>
using namespace std;

// //Brute Force Approach
// int countDigit(int n)
// {
//     int count = 0;
//     while(n > 0)
//     {
//         count ++;
//         n /= 10;
//     }
//     return count;
// }


//Optimal Approach
int countDigit2(int n)
{
    if(n == 0) return 0;
    return (int)(log10(abs(n))) + 1;  //abs gives the absolute value of the number
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Number of digits: " << countDigit2(n);
    return 0;
}