#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {11,20,3,41,13,61,23,58,9};
    sort(v.begin(),v.end());
    for(int i:v)
        cout<<i<<" ";
    return(0);
}