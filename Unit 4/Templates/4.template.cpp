#include <iostream>
using namespace std;
void display(int x)
{
    cout << x << endl;
}
void display(double y)
{
    cout << y << endl;
}
void display(string s)
{
    cout << s << endl;
}
int main()
{
    display(4);
    display(5.4);
    display("Arvind");
    return (0);
}