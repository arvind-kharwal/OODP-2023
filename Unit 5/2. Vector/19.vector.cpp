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
    if (v.empty() == 1)
        cout << "Empty";
    else
        cout << "Not Empty";
    return (0);
}