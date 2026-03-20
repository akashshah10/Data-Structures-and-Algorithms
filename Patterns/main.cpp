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

int main()
{
    int n;
    cin >> n;
    p1(n);
    return 0;
}