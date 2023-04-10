#include <iostream>
using namespace std;
template <class T>
class Example
{
    T a, b;

public:
    Example(T x, T y)
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
    Example<int> E1(10, 20);
    E1.display();
    Example<double> E2(23.5, 56.7);
    E2.display();
    Example<string> E3("Arvind", "Kharwal");
    E3.display();
    return (0);
}