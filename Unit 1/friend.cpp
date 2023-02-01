#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        void getdata(int,int);
        friend void getsum(Example);
};
void Example::getdata(int x,int y)
{
        a = x;
        b = y;
}

void getsum(Example E)
{
    int s = E.a+E.b;
    cout<<"\nThe sum is "<<s;
}
int main()
{
    Example E1;
    E1.getdata(10,20);
    getsum(E1);
    return(0);
}