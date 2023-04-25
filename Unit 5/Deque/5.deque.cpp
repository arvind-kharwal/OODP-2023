#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> D ={ 1,2,3,4,5};
    deque<int>::iterator i,j;
    for(i=D.begin();i!=D.end();i++)
        cout<<*i<<" ";
    D.pop_back();
    D.pop_front();
    cout<<"\nafter adding elements"<<endl;
    for(i=D.begin();i!=D.end();i++)
        cout<<*i<<" ";
    return(0);
}