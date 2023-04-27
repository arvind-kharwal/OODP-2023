#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    for (int i = 1; i <=5; i++)
    {
        v.push_back(i);
    }
    cout << v.size() <<endl;
    cout << v.capacity() <<endl;
    return 0;
}