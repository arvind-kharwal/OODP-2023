#include<iostream>
using namespace std;
class Example;
class Test
{
        int a;
    public:
        void geta(int);
        friend void swap(Test,Example);
};
class Example
{
        int b;
    public:
        void getb(int);
        friend void swap(Test,Example);
};
void Test::geta(int x)
{
    a = x;
}

void Example::getb(int y)
{
    b = y;
}
void swap(Test T1,Example E1)
{
    cout<<"\nThe values befor swapping are: "<<T1.a<<" "<<E1.b<<endl;
    int t = T1.a;
    T1.a = E1.b;
    E1.b = t;
    cout<<"\nThe values after swapping are: "<<T1.a<<" "<<E1.b<<endl;
}
int main()
{
    Test T;
    T.geta(10);
    Example E;
    E.getb(20);
    swap(T,E);
    return(0);
}