#include <iostream>
using namespace std;
class Base1
{
protected:
    int a;

public:
    void get_a(int);
};
class Base2
{
protected:
    int b;

public:
    void get_b(int);
};
class Child : public Base1, public Base2
{
public:
    void display();
};
void Base1::get_a(int x)
{
    a = x;
}
void Base2::get_b(int y)
{
    b = y;
}
void Child::display()
{
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
}
int main()
{
    Child C1;
    Base1 B1;
    B1.get_a(20);
    Base2 B2;
    B2.get_b(100);
    C1.display();
    return (0);
}