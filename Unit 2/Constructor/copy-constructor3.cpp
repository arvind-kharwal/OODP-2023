#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        Example(int,int);
        Example(Example&);
        void display();
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
Example::Example(Example &E)
{
    a = E.a;
    b = E.b;
}
int main()
{
    Example E1(10,20);
    E1.display();
    Example E2(E1);
    E2.display();
    return(0);
}