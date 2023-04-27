#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> D ={ 1,2,3,4,5};
    deque<int>::iterator i,j;
    i = D.begin();
    cout<<*i<<endl;
    j = D.end();
    cout<<*j<<endl;
    return(0);
}