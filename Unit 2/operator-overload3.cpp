#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        Example(int,int);
        void display();
        Example operator +(Example);
        Example()
        {

        }
};
Example::Example(int x,int y)
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
    Example E1(10,20);
    E1.display();
    Example E2(100,200);
    E2.display();
    Example E3 = E1+E2;
    E3.display();
    return(0);
}