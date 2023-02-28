#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    Example(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend Example operator-(Example &);
    Example()
    {
    }
};
Example operator-(Example &E1)
{
    Example E;
    E.a = -E1.a;
    return (E);
}
int main()
{
    Example E1(10);
    E1.display();
    Example E2 = -E1;
    E2.display();
    return (0);
}