#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    v.pop_back();
    cout << "\nafter pop back" << endl;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    return (0);
}