#include<iostream>
using namespace std;
class Example
{
        int a;
    public:
        void geta(int);
        friend Example sum(Example, Example);
        void display(Example);
};

void Example::geta(int x)
{
    a = x;
}
Example sum(Example E1, Example E2)
{
    Example E3;
    E3.a = E1.a+E2.a;
    return(E3);
}
void Example::display(Example E4)
{
    cout<<E4.a<<endl;
}

int main()
{
    Example E1,E2,R1;
    E1.geta(10);
    E1.display(E1);
    E2.geta(20);
    E2.display(E2);
    R1 = sum(E1,E2);
    R1.display(R1);
    return(0);    
}