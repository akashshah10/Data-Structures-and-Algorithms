#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if(b == 0)return a;
    return GCD(b, a % b);  //The swapping of digits is neccesary to avoid infinite recursion
}
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "The GCD is: "<< GCD(a,b);

    return 0;
}

    

