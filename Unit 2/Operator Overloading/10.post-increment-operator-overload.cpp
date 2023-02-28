#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    Example(int);
    void display()
    {
        cout << a << endl;
    }
    Example operator++(int);
    Example()
    {
    }
};
Example::Example(int x)
{
    a = x;
}
Example Example::operator++(int)
{
    Example E;
    E.a = a++;
    return (E);
}
int main()
{
    Example E1(10);
    E1.display();
    Example E2 = E1++;
    E2.display();
    E1.display();
    return (0);
}