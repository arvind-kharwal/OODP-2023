#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {10, 20, 30, 40, 50};
    vector<int> v(5);
    transform(v1.begin(), v1.end(), v2.begin(), v1.begin(), plus<int>());
    vector<int>::iterator i;
    for (i = v1.begin(); i != v1.end(); i++)
        cout << *i << " ";
    return (0);
}