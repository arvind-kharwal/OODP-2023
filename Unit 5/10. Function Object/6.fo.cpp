#include<iostream>
using namespace std;
#include<algorithm>
#include<functional>
int main()
{
    int a1[] = {10,24,42,64,90};
    int a2[] = {2,4,6,8,10};
    int res[5];
    transform(a1,a1+5,a2,res,std::divides<int>());
    for(int i=0;i<5;i++)
        cout<<res[i]<<" ";
    return(0);
}
