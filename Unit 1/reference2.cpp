#include<iostream>
using namespace std;
int main()
{
    int total = 100;
    int & sum = total;
    cout<<total<<endl;
    cout<<sum<<endl;
    cout<<&total<<endl;
    cout<<&sum<<endl;
    return(0);
}