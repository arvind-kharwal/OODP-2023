#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> D ={ 1,2,3,4,5};
    deque<int>::iterator i,j;
    for(i=D.begin();i!=D.end();i++)
        cout<<*i<<" ";
    D.push_back(100);
    D.push_front(-10);
    cout<<"\nafter adding elements"<<endl;
    for(i=D.begin();i!=D.end();i++)
        cout<<*i<<" ";
    return(0);
}