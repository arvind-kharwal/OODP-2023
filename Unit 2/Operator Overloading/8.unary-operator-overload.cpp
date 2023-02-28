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
    Example operator-();
    Example()
    {
    }
};
Example::Example(int x)
{
    a = x;
}
Example Example::operator-()
{
    Example R;
    R.a = -a;
    return (R);
}
int main()
{
    Example E1(10);
    E1.display();
    Example E2 = -E1;
    E2.display();
    return (0);
}