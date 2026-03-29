//std::list is a doubly linked list that allows efficient insertion and deletion from both ends and anywhere, but it does not support random access like std::vector.
#include <iostream>
#include <list>  //Header for list
using namespace std;

void expList()
{
    list<int> l;

    l.push_back(4);
    l.emplace_back(6);

    l.push_front(5);
    l.emplace_front(10);
    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout << *(it) <<" ";
    }
}

int main()
{
    expList();
    return 0;
}