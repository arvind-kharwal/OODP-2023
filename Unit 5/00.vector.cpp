#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V(1);
    vector<int>::iterator i;
    i = V.begin();
    cout<<*i<<" ";
    cout<<sizeof(V);
    return(0);
}