#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int hash[26] = {0};  // This imlementation is only applicable if all the characters of the string are in lowercase. If all the characters(256) are in the string just declare the array of size 256 and remove the subtraction operation

    for(int i = 0; i < s.length(); i ++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'];
    }
    return 0;
}