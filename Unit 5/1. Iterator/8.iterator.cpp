#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V = {1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator i,j;
    i = V.begin();
    j = next(i); // std::next() will advance by one by default, whereas std::advance() requires a distance.
    cout<<*i<<" "<<*j<<endl;
    return(0);
}