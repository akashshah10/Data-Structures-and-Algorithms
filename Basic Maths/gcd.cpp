#include <iostream>
#include <algorithm>
using namespace std;

int calculateGCD(int n1, int n2)
{
    int GCD = 1;
    // Brute Force
    for(int i = 1; i <= min(n1,n2); i++)
        {
            if(n1 % i == 0 && n2 % i == 0)
            {
                GCD = i;
            }
        }

    //Optimised 
//     for(int i = min(n1,n2); i >= 1; i++)
//     {
//         if(n1 % i == 0 && n2 % i == 0)
//         {
//             GCD = i;
//             break;
//         }
//     }
        return GCD;
}

int main()
{
    int n1, n2;
    cout << "Enter the first number: " << endl;
    cin >> n1;
    cout << "Enter the second number: " << endl;
    cin >> n2;
    cout << "The GCD of given numbers is: " << calculateGCD(n1,n2);

    return 0;
}