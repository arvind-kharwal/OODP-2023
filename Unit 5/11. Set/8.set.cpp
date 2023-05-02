#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s={1,2,3,4,5};
    set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
        cout<<*i<<" ";
    i = s.cend();
    s.erase(s.begin(),i);
    cout<<"\nAfter erasing"<<endl;
    for(i=s.begin();i!=s.end();i++)
        cout<<*i<<" ";
    return(0);
}