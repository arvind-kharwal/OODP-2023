#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int>::iterator i;
    i = v.begin();
    cout<<*i<<endl;
    advance(i,3);
    cout<<*i<<endl;
    advance(i,-1);
    cout<<*i<<endl;
    return(0);
}