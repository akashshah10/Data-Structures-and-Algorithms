#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    int arr[n];
    
    for(int i = 0; i < n; i ++)
    {
        cin >> arr[i];
    }

    int num;
    cin >> num;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            counter ++;
        }
    }
    cout << counter;

    return 0;
}