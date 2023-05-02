#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,3,6,3,8,9};
    int n;
    n = count(v.begin(),v.end(),11);
    cout<<"The count is: "<<n<<endl;
    return(0);
}