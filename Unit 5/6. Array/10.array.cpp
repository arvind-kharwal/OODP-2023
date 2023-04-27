#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,10> A;
    cout<<A.size()<<endl;
    cout<<A.max_size()<<endl;
    cout<<sizeof(A)<<endl;
    return(0);
}