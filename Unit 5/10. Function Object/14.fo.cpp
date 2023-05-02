#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
void myfun(int x)
{
    cout << x << " ";
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), myfun);
    return (0);
}