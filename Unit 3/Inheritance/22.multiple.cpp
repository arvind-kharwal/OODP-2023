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
    void display()
    {
        cout << "\nDisplay from Child";
    }
};
int main()
{
    Child C1;
    C1.display();
    C1.Base1::display();
    return (0);
}