#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> D ={ 1,2,3,4,5};
    deque<int>::iterator i,j;
    cout<<D.at(1)<<endl;
    return(0);
}