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
    C1.b1 = 100;
    // C1.a = 10; // a is ambigous
    cout<<C1.b1<<endl;
    return (0);
}