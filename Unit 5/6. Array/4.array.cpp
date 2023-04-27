#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> A={1,2,3,4,5};
    array<int,5>::iterator i;
    for(i=A.begin();i!=A.end();i++)
        cout<<*i<<" ";
    return(0);
}