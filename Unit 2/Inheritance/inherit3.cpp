#include <iostream>
using namespace std;
class Parent
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
            cout<<a<<" "<<b<<endl;
        }
        void sum()
        {
            int s = a+b;
            cout<<"The sum is: "<<s;
        }
};
class Child:public Parent
{
    public:
};

int  main()
{
    Child C1;
    C1.getdata(10,20);
    C1.display();
    C1.sum();
    return(0);
}