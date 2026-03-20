#include <iostream>
using namespace std;

//Square Pattern
void p1(int n)
{
    for(int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//Right angled triangle pattern
void p2(int n)
{
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    p1(n);
    p2(n);
    return 0;
}