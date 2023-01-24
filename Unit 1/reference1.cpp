#include<iostream>
using namespace std;
int fun( int &);
int main()
{
    int a=10,r;
    r= fun(a);
    cout<<"The a is:"<<r<<endl;
    cout<<"The address of a: "<<&a<<endl;
    cout<<"The address of r: "<<&r<<endl;
    return(0);
}
int fun(int & n)
{
    //cout<<"The n is:"<<n<<&n<<endl;
    cout<<"The address of n"<<&n<<endl;
    return(n);
}