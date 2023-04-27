#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V(10);
    vector<int>::iterator i;
    for(i=V.begin();i!=V.end();i++)
        cout<<*i<<" ";
    return(0);
}