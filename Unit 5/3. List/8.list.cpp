#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L1 = {1, 2, 3, 4};
    list<int> L2 = {5, 61, 7, 8};
    L1.merge(L2);
    for (auto i = L1.begin(); i != L1.end(); i++)
        cout << *i << " ";
    return (0);
}