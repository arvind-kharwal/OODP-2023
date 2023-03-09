#include <iostream>
using namespace std;
class Parent
{
protected:
    void test()
    {
        cout << "test function in Protected of Parent" << endl;
    }

public:
    void show()
    {
        cout << "Show method from Parent Class" << endl;
        test();
    }
};
class Child : public Parent
{
protected:
    void check()
    {
        cout << "Check function in Protected of Child" << endl;
    }

public:
    void display()
    {
        cout << "Display method from Child Class" << endl;
    }
};
int main()
{
    Parent P;
    P.show();
    Child C;
    C.show();
    C.display();
    C.show();
    return (0);
}