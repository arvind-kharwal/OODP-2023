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
    Example sum(Example E)
    {
        Example E1;
        E1.a = a + E.a;
        E1.b = b + E.b;
        return (E1);
    }
};
int main()
{
    Example A, B, S;
    A.getdata(10, 20);
    A.display();
    B.getdata(100, 200);
    B.display();
    S = A.sum(B);
    // S = A + B;   This is not possible
    S.display();
    return (0);
}