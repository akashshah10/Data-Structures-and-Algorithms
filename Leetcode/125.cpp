#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

bool isPalindrome(string s)
{
    string cleaned = "";
    for(char ch: s)
    {
        if(isalnum(ch))
        {
            cleaned += tolower(ch);
        }
    }
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    return(reversed == cleaned);
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if(isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}