#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example(int, int);
    void display();
    Example sum(Example);
    Example()
    {
    }
};
Example::Example(int x, int y)
{
    a = x;
    b = y;
}
void Example::display()
{
    cout << a << " " << b << endl;
}
Example Example::sum(Example E)
{
    Example R;
    R.a = a + E.a;
    R.b = b + E.b;
    return (R);
}
int main()
{
    int a, b, s;
    a = 10;
    b = 20;
    s = a + b;
    cout << "The sum is " << s << endl;
    Example E1(10, 20);
    E1.display();
    Example E2(100, 200);
    E2.display();
    Example E3 = E1.sum(E2);
    // E3 = E1+E2;
    E3.display();
    return (0);
}