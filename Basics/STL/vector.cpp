#include <iostream>
#include <vector>
using namespace std;

void expVec()
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

    for(auto it = v.begin(); it != v.end(); it ++)  //auto = compiler decides the type
    {
        cout << *it << endl;
    }
   

    vector<int> v1 = {10, 20 ,30};
    vector<int> v2 = {50, 60 ,70};
    v1.swap(v2);  //Swap method
    for(auto it = v1.begin(); it != v1.end(); it ++)
    {
        cout << *(it) << " ";
    }

}

int main()
{
    expVec();
    return 0;
}