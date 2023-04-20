#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v = {10, 20, 25};
    vector<int> v1(v);
    vector<int>::iterator i;
    for (i = v1.begin(); i != v1.end(); i++)
    {
        cout << *i << " ";
    }
    return (0);
}