// 

#include<iostream>
using namespace std;
class Test
{
        int b;
    public:
        void getdata(int);
    
};
class Example
{
        int a;
    public:
        void getdata(int);
        void getsum(Example,Test);
};
void Test::getdata(int y)
{
    b = y;
}
void Example::getdata(int x)
{
    a = x;
}
void Example::getsum(Example E1,Test E2)
{
    int s = E1.a+E2.b;
    cout<<"\nThe sum is: "<<s;
}
int main()
{
    Example E1,E3;
    Test T1;
    E1.getdata(10);
    T1.getdata(20);
    E3.getsum(E1,T1);
    return(0);
}