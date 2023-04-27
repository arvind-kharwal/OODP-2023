#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(13);
    vector<int>::iterator i,j;
    i = v.begin();
    j = v.end();
    int k = distance(i,j);
    cout<<k;
    //cout<<distance(i,j)<<endl;
    return(0);
}