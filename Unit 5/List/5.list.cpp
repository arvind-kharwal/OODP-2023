#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L;
    for (int i = 1; i < 6; i++)
        L.push_front(i);
    for (auto i = L.begin(); i != L.end(); i++)
        cout << *i << " ";
    return (0);
}