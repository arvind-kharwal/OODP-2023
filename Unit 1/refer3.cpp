#include<iostream>
using namespace std;
int main()
{
    int total = 100;
    int & sum = total;
    sum = sum+50;
    cout<<total<<endl;
    cout<<sum<<endl;
    cout<<&total<<endl;
    cout<<&sum<<endl;
    return(0);
}