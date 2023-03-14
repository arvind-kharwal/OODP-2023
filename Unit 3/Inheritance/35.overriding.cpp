#include <iostream>
using namespace std;
class A
{
public:
    void f1()
    {
        cout << "f1 from class A" << endl;
    }
    void f2()
    {
        cout << "f2 from class A" << endl;
    }
};
class B : public A
{
public:
    void f1()
    {
        cout << "f1 from class B" << endl;
    }
    void f2(int x)
    {
        cout << "f2 from class B" << endl;
        cout << "\n"<< x << endl;
    }
};
int main()
{
    B B1;
    B1.f1();
    B1.f2(5);    // Error, no matching function for call to 'B::f2()'
    return (0);
}