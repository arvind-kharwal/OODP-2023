#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int, int);
    void display();
    Example sum(Example);
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
Example Example::sum(Example E)
{
    Example E1;
    E1.a = a + E.a;
    E1.b = b + E.b;
    return (E1);
}
int main()
{
    Example A, B, R;
    A.getdata(10, 20);
    A.display();
    B.getdata(100, 200);
    B.display();
    R = A.sum(B);
    R.display();
    return (0);
}