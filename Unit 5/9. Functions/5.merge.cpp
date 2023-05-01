#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {10,20,30,40,50};
    vector<int>:: iterator i,j;
    vector<int> v3(10);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());    
    for(i=v3.begin();i!=v3.end();i++)
        cout<<*i<<" ";
    return(0);
}