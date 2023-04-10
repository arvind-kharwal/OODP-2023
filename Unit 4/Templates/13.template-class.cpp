#include <iostream>
using namespace std;
template <class T>
class Example
{
    T a, b;

public:
    void getdata(T, T);
    void display();
};
template <class T>
void Example<T>::getdata(T x, T y)
{
    a = x;
    b = y;
}
template <class T>
void Example<T>::display()
{
    cout << a << " " << b << endl;
}
int main()
{
    Example<int> E1;
    E1.getdata(10, 20);
    E1.display();
    cout << "------" << endl;
    Example<double> E2;
    E2.getdata(12.3, 56.4);
    E2.display();
    cout << "------" << endl;
    Example<string> E3;
    E3.getdata("Hello", "Arvind");
    E3.display();
    return (0);
}
