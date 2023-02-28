#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    void getdata(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    friend Example operator++(Example &, int);
};
Example operator++(Example &E1, int)
{
    Example E;
    E.a = E1.a++;
    return (E);
}
int main()
{
    Example E1, E2;
    E1.getdata(5);
    E1.display();
    E2 = E1++;
    E2.display();
    E1.display();
    return (0);
}
