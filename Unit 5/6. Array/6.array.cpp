#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,7> A;
    A.fill(7);
    cout<<"The elements: ";
    for(int i:A)
        cout<<i<<" ";
    return(0);
}