#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // All operations take O(1) time complexity
    stack<int> s;
    s.push(2);
    s.push(6);
    s.push(1);
    s.push(5);
    s.push(4);
     
    cout << s.size() << endl;
    s.pop();
    
    cout << s.top() << endl;
    
    cout << s.empty();
    
    return 0;
}
