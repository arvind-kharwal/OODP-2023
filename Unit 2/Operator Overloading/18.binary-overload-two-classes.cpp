#include<iostream>
using namespace std;
class Test;
class Example
{
        int a,b;
    public:
        void getdata(int x,int y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<a<<" "<<b<< endl;
        }
        friend void operator+(Example,Test);
};
class Test
{
        int c,d;
    public:
        void getinfo(int x,int y)
        {
            c = x;
            d = y;
        }
        void show()
        {
            cout<<c<<" "<<d<< endl;
        }
        friend void operator+(Example,Test);
};

void operator+ (Example &E1,Test &T1)
{
    Example E;
    E.a = E1.a+T1.c;
    E.b = E1.b+T1.d;
    
}
int main()
{
    Example E1;
    E1.getdata(10,20);
    E1.display();
    Test T1;
    T1.getinfo(100,200);
    T1.show();
    Example E3 = E1+T1;
    E3.display();
    return(0);
}