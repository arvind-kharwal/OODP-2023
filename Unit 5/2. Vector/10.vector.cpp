#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    v.assign(7, 5);
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    return (0);
}