#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> D1, D2;
    D1 = { 1,2,3,4,5};
    D2 = {10,20,30,40,50};
    deque<int>::iterator i,j;
    cout<<"\nDeque 1"<<endl;
    for(i=D1.begin();i!=D1.end();i++)
        cout<<*i<<" ";
        cout<<"\nDeque 2"<<endl;
    for(i=D2.begin();i!=D2.end();i++)
        cout<<*i<<" ";
    swap(D1,D2);
    cout<<"\nafter swapping"<<endl;
    cout<<"\nDeque 1"<<endl;
    for(i=D1.begin();i!=D1.end();i++)
        cout<<*i<<" ";
        cout<<"\nDeque 2"<<endl;
    for(i=D2.begin();i!=D2.end();i++)
        cout<<*i<<" ";
    return(0);
}