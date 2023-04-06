#include <iostream>
using namespace std;
template <class T>
T big(T a,T b)
{
    if(a>b)
        return(a);
    else
        return(b);
}
int main()
{
    cout<<big(10,30)<<endl;
    cout<<big(100,30)<<endl;
    cout<<big(10.7,3.0)<<endl;
    return(0);
}