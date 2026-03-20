#include <iostream>
using namespace std;
 
void name(int n)
{
    static int i = 0;
    if(i > n) return;
    i ++;
    cout << "akash" << endl;
    name(n);
}
int main()
{
    int n;
    cin >> n;
    name(n);
    return 0;
}