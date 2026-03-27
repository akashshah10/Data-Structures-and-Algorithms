#include <utility>
#include <iostream>
using namespace std;

void expPair()
{
    pair<int, int> p1 = {1,3};
    cout << p1.first <<" "<< p1.second << endl;

    pair<int, pair<int, string>> p2 = {1,{2,"Akash"}};
    cout << p2.first << "  " << p2.second.first <<" "<< p2.second.second << endl;

    pair<int, int> arr[] = { {1, 2}, {4, 5}, {6, 7} };
    cout << arr[2].second;
}
int main()
{
    expPair();
    return 0;
}

