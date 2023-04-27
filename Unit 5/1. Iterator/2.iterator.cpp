#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V={1,2,3};
    vector<int>::iterator i;
    i = V.begin();
    i++;
    cout<<*i<<" ";
    return(0);
}