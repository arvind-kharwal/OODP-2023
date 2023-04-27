#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,10> A={1,12,30,4,3,5,78,55,41,66};
    array<int,10>::iterator i,j;
    i = A.begin();
    j = A.end();
    sort(i,j);
    for(int i:A)
        cout<<i<<" ";
    return(0);
}