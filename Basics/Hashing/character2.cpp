#include <iostream>
using namespace std;

void frequencyQueries()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        hash[s[i]] ++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        cout << hash[c];
    }
}

int main()
{
    frequencyQueries();
    return 0;
}