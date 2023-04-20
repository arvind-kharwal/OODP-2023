#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i);
    }
    for(int i:v)
    {
        cout<<i<<endl;
    }
    return(0);
}