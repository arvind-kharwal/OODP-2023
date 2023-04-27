#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    cout << "Max Size: " << v.max_size();
    cout << "\nSize: " << v.size() << endl;
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    v.resize(5);
    cout << "\nSize: " << v.size() << endl;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    return (0);
}