#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int>& vec)
// {
//     vector<int> reverse;
//     for(int i = vec.size() - 1; i >= 0; i--)
//     {
//         reverse.emplace_back(vec[i]);
//     }
//     return reverse;
// }

// Two Pointer Approach
{
        int st = 0;
        int end = vec.size() - 1;
        while(st < end)
        {
            int temp = vec[st];
            vec[st] = vec[end];
            vec[end] = temp;
            st ++;
            end --;
        }
        return vec;
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