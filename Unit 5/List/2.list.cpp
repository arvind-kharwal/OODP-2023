#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L = {1, 2, 3, 4};
    list<int>::iterator i;
    for (i = L.begin(); i != L.end(); i++)
        cout << *i << " ";
    return (0);
}