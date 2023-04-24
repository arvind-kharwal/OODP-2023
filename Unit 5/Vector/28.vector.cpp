#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v={1,2,3};
    v.assign(6,2);
    for(auto i = v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
}