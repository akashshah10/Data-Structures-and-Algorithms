#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {4,5,6,7};
    // cout << v.size() << endl;
    // v.push_back(1);
    // cout << v.size();
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

   
    return 0;
}