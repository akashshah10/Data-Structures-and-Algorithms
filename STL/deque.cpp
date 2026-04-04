#include <iostream>
#include <deque>
using namespace std;  


int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    return 0;
}
