#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L = {1, 2, 3, 4};
    L.pop_back();
    for (auto i = L.begin(); i != L.end(); i++)
        cout << *i << " ";
    return (0);
}