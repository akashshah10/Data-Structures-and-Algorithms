#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> vec)
{
    vector<int> reverse;
    for(int i = vec.size() - 1; i >= 0; i--)
    {
        reverse.emplace_back(vec[i]);
    }
    return reverse;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> result = reverseArray(vec);
    for(int x: result)
    {
        cout << x << " ";
    }
    return 0;
}