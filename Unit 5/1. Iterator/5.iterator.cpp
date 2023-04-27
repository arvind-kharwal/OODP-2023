#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V = {1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator i;
    i = V.begin();
    advance(i,5);
    cout<<*i<<endl;
    advance(i,-2);
    cout<<*i<<endl;
    i = V.end();
    advance(i,-2);
    cout<<*i<<endl;

}