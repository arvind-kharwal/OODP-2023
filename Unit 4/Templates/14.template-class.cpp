#include <iostream>
using namespace std;
template <class T1, class T2>
class Example
{
    T1 a;
    T2 b;

public:
    void getdata(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Example<int, int> E1;
    E1.getdata(10, 20);
    E1.display();
    cout << "-------" << endl;
    Example<double, double> E2;
    E2.getdata(23.4, 56.4);
    E2.display();
    cout << "-------" << endl;
    Example<int, double> E3;
    E3.getdata(12, 45.7);
    E3.display();
    cout << "-------" << endl;
    Example<int, string> E4;
    E4.getdata(12, "Arvind");
    E4.display();
    return (0);
}