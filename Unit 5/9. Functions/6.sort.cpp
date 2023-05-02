#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int a[] = {2,34,7,4,54};
    sort(a,a+6);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    return(0);
}