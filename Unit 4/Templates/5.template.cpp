#include <iostream>
using namespace std;
template <class T>
void display(T a)
{
    cout << a << endl;
}
int main()
{
    display(5);
    display(67.5);
    display("Hello World");
    return (0);
}