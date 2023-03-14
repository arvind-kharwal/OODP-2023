#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B1 : virtual public A
{
public:
    int b1;
};
class B2 : virtual public A
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
    C1.a = 10;
    cout << C1.a;
    return (0);
}