#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        Example(int,int);
        void display();
        Example sum(Example);
        Example();
};
Example::Example(int x,int y)
{
    a = x;
    b = y;
}

void Example::display()
{
    cout<<a<<" "<<b<<endl;
}
Example Example::sum(Example A)
{
    Example E;
    E.a = a+A.a;
    E.b = b+A.b;
    return(E);
}
Example::Example()
{

}
int main()
{
    Example E1(10,20);
    E1.display();
    Example E2(100,200);
    E2.display();
    Example E3 = E1.sum(E2);
    E3.display();
    return(0);
}