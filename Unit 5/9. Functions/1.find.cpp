#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    vector<int>::iterator i;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    i = find(v.begin(),v.end(),n);
    if(i!=v.end())
        cout<<"The element is found at: "<<i-v.begin()<<endl;
    else
        cout<<"Element does not exist";
    return(0);
}