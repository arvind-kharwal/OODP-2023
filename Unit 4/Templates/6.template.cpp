#include <iostream>
using namespace std;
template <class T>
T sum(T a, T b)
{
    T s = a + b;
    return (s);
}
int main()
{
    int s = sum(10, 20);
    cout << s << endl;
    double d = sum(34.5, 67.4);
    cout << d << endl;
    return (0);
}