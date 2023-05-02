#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {10, 20, 30, 40, 50};
    vector<int> v;
    transform(v2.begin(), v2.end(), v1.begin(), v2.begin(), divides<int>());
    vector<int>::iterator i;
    for (i = v2.begin(); i != v2.end(); i++)
        cout << *i << " ";
    return (0);
}