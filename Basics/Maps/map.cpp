#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i ++)  // The pre-computation can be done here as well.
    {
        cin >> arr[i];
    }


    // Pre-compute. Increasing the frequency 
    map<int, int>freq;
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }


    // Iterator. map stores data in sorted order
    // for(auto it: freq)
    // {
    //     cout << it.first << "-->" << it.second << endl;
    // }


    // Query
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--)
    {
        int numbers;
        cin >> numbers;
        cout << freq[numbers] << endl;
    }
    return 0;
}