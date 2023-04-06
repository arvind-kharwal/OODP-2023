#include <iostream>
using namespace std;
template<class T1,class T2>
T1 sum(T1 a, T2 b)
{
    T1 s;
    s = a+b;
    return(s);
}
int main()
{
    cout<<sum(10.9,20);
    return(0);
}