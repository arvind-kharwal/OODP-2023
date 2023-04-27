#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> A={1,2,3,4,5};
    for(int i:A)
        cout<<i<<" ";
    return(0);
}