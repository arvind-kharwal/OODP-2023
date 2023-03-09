#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Show method from Parent Class" << endl;
    }
};
class Child : private Parent
{
public:
    void display()
    {
        cout << "Display method from Child Class" << endl;
        show();
    }
};
int main()
{
    Parent P;
    Child C;
    P.show();
    C.display();
    // C.show();
    return (0);
}