#include<iostream>
using namespace std;
class Example
{
        int a;
    public:
        void getn(int);
        void display();
        Example operator ++(int);
};
void Example::getn(int x)
{
    a = x;
}
void Example::display()
{
    cout<<a<<endl;
}
Example Example::operator ++(int)
{
    Example E;
    E.a = a++;
    return(E);
}
int main()
{
    Example E1,E2;
    E1.getn(5);
    E1.display();
    E2 = E1++;
    E1.display();
    E2.display();
    return(0);
}