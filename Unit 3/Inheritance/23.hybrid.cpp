#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B1 : public A
{
public:
    int b1;
};
class B2 : public A
{
public:
    int b2;
};
class C : public B1, public B2
{
public:
    int c;
    // int a,a,b1,b2;
};
int main()
{
    C C1;
    A A1;
    B1 B0;
    B2 B01;
    cout << sizeof(B0) << endl;
    cout << sizeof(A1) << endl;
    cout << sizeof(C1) << endl;
    cout << sizeof(B01) << endl;
    return (0);
}