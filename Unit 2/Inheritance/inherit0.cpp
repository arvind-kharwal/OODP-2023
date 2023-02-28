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
class Child : public Parent
{
public:
    void display()
    {
        cout << "Display method from Child Class" << endl;
    }
};
int main()
{
    Parent P;
    Child C;
    P.show();
    C.display();
    C.show();
    return (0);
}