#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s = {1,2,3,4};
    set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
        cout<<*i<<" ";
    cout<<"\nThe size is: "<<s.size()<<endl;
    return(0);
}