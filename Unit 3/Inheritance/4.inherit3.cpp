#include <iostream>
using namespace std;
class Parent
{
    int a;

public:
    int b;
    void get_ab();
    int get_a();
};
class Child : private Parent
{
    int c;

public:
    void mul();
    void display();
};
void Parent::get_ab()
{
    a = 5;
    b = 7;
}
int Parent::get_a()
{
    return (a);
}
void Child::mul()
{
    get_ab();
    c = b * get_a();
}
void Child::display()
{
    cout << "a: " << get_a() << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}
int main()
{
    Child C;
    C.mul();
    C.display();
    return (0);
}