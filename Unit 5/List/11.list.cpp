#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L1 = {10, 2, 43, 14};
    list<int>::iterator i,j;
    L1.reverse();
    for (auto i = L1.begin(); i != L1.end(); i++)
        cout << *i << " ";
    return (0);
}