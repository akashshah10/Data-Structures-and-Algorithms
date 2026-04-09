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

//Right angled triangle pattern using numbers
void p3(int n)
{
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//Second Right angled triangle pattern using numbers
void p4(int n)
{
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
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
    p3(n);
    p4(n);
    return 0;
}