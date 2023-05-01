#include<iostream>
using namespace std;
#include<algorithm>
#include<functional>
int increment(int x)
{
    x = x*2;
    return(x);
}
int main()
{
    int a[] = {1,2,3,4};
    int res[4];
    for(int i=0;i<3;i++)
        cout<<a[i]<<" ";
    transform(a,a+4,res,increment);
    cout<<"\nAfter Increment"<<endl;
    for(int i=0;i<3;i++)
        cout<<res[i]<<" ";
    return(0);
}
