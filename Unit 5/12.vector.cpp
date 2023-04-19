#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(3);
    vector<int>::iterator i,j;
    i = v.begin();
    j = v.end();
    cout<<distance(i,j)<<endl;
    return(0);
}