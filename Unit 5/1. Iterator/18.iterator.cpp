#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int>::iterator i,j;
    i = v.end();
    j = prev(i,1);
    cout<<*j<<endl;
    j = prev(i,1);
    cout<<*j<<endl;
    return(0);
}