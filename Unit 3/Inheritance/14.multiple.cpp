#include <iostream>
using namespace std;
class Base1
{
public:
    void display()
    {
        cout << "\nDisplay from Base1";
    }
};
class Base2
{
public:
    void display()
    {
        cout << "\nDisplay from Base2";
    }
};
class Child : public Base1, public Base2
{
public:
};
int main()
{
    Base1 B1;
    B1.display();
    Base2 B2;
    B2.display();
    Child C1;
    // C1.display(); // it will not work because of ambiguity.
    return (0);
}