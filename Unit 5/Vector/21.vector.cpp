#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    v.clear();
    cout << "After Clear" << endl;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << v.size();
    return (0);
}