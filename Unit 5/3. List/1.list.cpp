#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L = {1, 2, 3, 4};
    list<int>::iterator i, j;
    i = L.begin();
    j = L.end();
    cout << *i << endl;
    cout << *j << endl;
    return (0);
}