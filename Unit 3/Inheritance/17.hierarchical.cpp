#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    void display(int x)
    {
        a = x;
        cout << "a: " << a << endl;
    }
};
class Child1 : public Base
{
public:
    void show1()
    {
        cout << "Child 1" << endl;
    }
};

class Child2 : public Base
{
public:
    void show2()
    {
        cout << "Child 2";
    }
};
int main()
{
    Child1 C1;
    C1.display(10);
    C1.show1();
    Child2 C2;
    C2.display(100);
    C2.show2();
    return (0);
}