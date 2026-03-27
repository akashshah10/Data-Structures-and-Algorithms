#include <utility>
#include <iostream>
using namespace std;

void expPair()
{
    pair<int, int> p1 = {1,3};
    cout << p1.first <<" "<< p1.second << endl;

    pair<int, pair<int, string>> p2 = {1,{2,"Akash"}};
    cout << p2.first << "  " << p2.second.first <<" "<< p2.second.second << endl;
}
int main()
{
    expPair();
    return 0;
}

