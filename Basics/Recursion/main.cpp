#include <iostream>
using namespace std;

void fun1()
{
    static int count = 0;  // Base case and static retains value across calls
    if(count == 3) return;
    cout << 1;
    count ++;
    fun1();
}

int main()
{
    fun1();
    return 0;
}