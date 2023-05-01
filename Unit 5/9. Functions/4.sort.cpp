#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {11,20,3,41,13,61,23,58,9};
    vector<int>:: iterator i,j;
    j = v.end();
    j = j-2;
    sort(v.begin(),j);
    for(int i:v)
        cout<<i<<" ";
    return(0);
}