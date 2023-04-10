#include <iostream>
using namespace std;
template <class T>
class Example
{
    T a, b;

public:
    Example(T, T);
    void display()
    {
        cout << a << " " << b << endl;
    }
};
template <class T>
Example<T>::Example(T x, T y)
{
    a = x;
    b = y;
}
int main()
{
    Example<int> E1(10, 20);
    E1.display();
}