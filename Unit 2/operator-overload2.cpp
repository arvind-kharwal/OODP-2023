#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        void getdata(int,int);
        void display();
        Example operator +(Example);
};
void Example::getdata(int x,int y)
{
    a = x;
    b = y;
}
void Example:: display()
{
    cout<<a<<" "<<b<<endl;
}
Example Example::operator+(Example E)
{
    Example A;
    A.a = a+E.a;
    A.b = b+E.b;
    return(A);
}
int main()
{
    Example E1,E2,E3;
    E1.getdata(10,20);
    E1.display();
    E2.getdata(100,200);
    E2.display();
    E3 = E1+E2;
    E3.display();
    return(0);
}