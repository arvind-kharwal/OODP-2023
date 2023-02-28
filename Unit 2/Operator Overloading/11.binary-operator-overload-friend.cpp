#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
    friend Example operator+(Example &, Example &);
};
Example operator+(Example &E1, Example &E2)
{
    Example E;
    E.a = E1.a + E2.a;
    E.b = E1.b + E2.b;
    return (E);
}
int main()
{
    Example E1, E2, E3;
    E1.getdata(10, 20);
    E1.display();
    E2.getdata(100, 200);
    E2.display();
    E3 = E1 + E2;
    E3.display();
    return (0);
}