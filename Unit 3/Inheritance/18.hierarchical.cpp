#include <iostream>
using namespace std;
class A
{
protected:
    int a,b;

public:
    void getdata(int x,int y)
    {
        a = x;
        b = y;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << a <<" "<<b<< endl;
    }
};
class C : public A
{
public:
    void show()
    {
        cout << a <<" "<<b<< endl;
    }
};
int main()
{
    B B1;
    B1.getdata(100,200);
    B1.display();
    C C1;
    C1.getdata(10,20);
    C1.show();
    return (0);
}