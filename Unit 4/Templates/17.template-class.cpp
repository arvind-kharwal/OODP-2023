#include <iostream>
using namespace std;
template <class T>
class Example
{
    T a, b;

public:
    void getdata(T x, T y)
    {
        a = x;
        b = y;
    }
    void swap()
    {
        T t = a;
        a = b;
        b = t;
        cout << "The numbers after swapping are: " << a << " " << b << endl;
    }
};
int main()
{
    Example<int> E1;
    E1.getdata(34, 56);
    E1.swap();
    Example<double> E2;
    E2.getdata(34.3, 45.6);
    E2.swap();
    Example<string> E3;
    E3.getdata("A", "B");
    E3.swap();
    return (0);
}