#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V(12);
    vector<int>::iterator i,j;
    i = V.begin();
    j = V.end();
    cout<<distance(i,j)<<endl;
    return(0);    
}