#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void display()
    {
        cout << "Hello" << endl;
    }
};
class B : public A
{
    int b;

public:
    void show()
    {
        cout << "B" << endl;
    }
};
int main()
{
    A A1;
    A1.display();
    cout << sizeof(A1) << endl;
    B B1;
    B1.show();
    cout << sizeof(B1) << endl;
    return (0);
}