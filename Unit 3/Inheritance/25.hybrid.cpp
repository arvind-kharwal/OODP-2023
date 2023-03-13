#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void F1()
    {
        cout << "F1" << endl;
    }
};
class B1 : public A
{
public:
    int b1;
    void F2()
    {
        cout << "F2" << endl;
    }
};
class B2 : public A
{
public:
    int b2;
    void F3()
    {
        cout << "F3" << endl;
    }
};
class C : public B1, public B2
{
public:
    int c;
    // int a,a,b1,b2;
    void F4()
    {
        cout << "F4" << endl;
    }
};
int main()
{
    C C1;
    // C1.a = 10; // a is ambigous
    C1.F2();
    C1.F3();
    C1.F4();
    // C1.F1(); // F1 fucntion is ambigous
    return (0);
}