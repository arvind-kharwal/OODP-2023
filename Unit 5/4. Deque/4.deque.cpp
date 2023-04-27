#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> D ={ 10,20,30,40,50};
    deque<int>::iterator i,j;
    for(i=D.begin();i!=D.end();i++)
        cout<<*i<<" ";
    cout<<"\n"<<D.at(2);
    return(0);
}