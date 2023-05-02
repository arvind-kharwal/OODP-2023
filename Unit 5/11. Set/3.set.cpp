#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s={1,2,3,3,3,3};
    set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
        cout<<*i<<" ";
    return(0);
}