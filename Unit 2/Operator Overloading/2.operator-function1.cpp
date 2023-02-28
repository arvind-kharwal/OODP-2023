#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int, int);
    void display();
    Example operator+(Example E1)
    {
        Example E;
        E.a = a + E1.a;
        E.b = b + E1.b;
        return (E);
    }
};

void Example::getdata(int x, int y)
{
    a = x;
    b = y;
}
void Example::display()
{
    cout << a << " " << b << endl;
}

int main()
{
    Example A, B, R;
    A.getdata(10, 20);
    A.display();
    B.getdata(100, 200);
    B.display();
    R = A + B;
    R.display();
    return (0);
}