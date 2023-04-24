#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<vector<int>> v= {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>:: iterator i;
    vector<int>::iterator j;
    for(i=v.begin();i!=v.end();i++)
    {
        for(j=i->begin();j!=i->end();j++)
            cout<<*j<<" ";
        cout<<"\n";
    }
    return(0);
}
