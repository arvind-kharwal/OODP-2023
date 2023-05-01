#include<iostream>
using namespace std;
#include<algorithm>
#include<functional>
int main()
{
    int a1[] = {1,2,3};
    int a2[] = {4,5,6};
    int res[3];
    transform(a1,a1+3,a2,res,plus<int>());
    for(int i=0;i<3;i++)
        cout<<res[i];
    return(0);
}
