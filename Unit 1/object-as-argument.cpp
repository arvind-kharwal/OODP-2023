#include<iostream>
using namespace std;
class Example
{
        int a;
    public:
        void getdata(int);
        void getsum(Example,Example);
};

void Example::getdata(int x)
{
    a = x;
}
void Example::getsum(Example E1,Example E2)
{
    int s = E1.a+E2.a;
    cout<<"\nThe sum is: "<<s;
}
int main()
{
    Example E1,E2,E3;
    E1.getdata(10);
    E2.getdata(20);
    E3.getsum(E1,E2);
    return(0);
}