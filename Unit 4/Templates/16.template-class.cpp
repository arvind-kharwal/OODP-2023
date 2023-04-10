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
    void display();
};
template <class T>
void Example<T>::display()
{
    T s = a + b;
    cout << a << " " << b << endl;
    cout << "The sum is: " << s << endl;
}
int main()
{
    Example<int> E1;
    E1.getdata(10, 34);
    E1.display();
    return (0);
}