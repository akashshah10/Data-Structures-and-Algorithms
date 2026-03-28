#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {4,5};
    cout << v.size() << endl;
    v.push_back(1);
    cout << v.size();
   
    return 0;
}