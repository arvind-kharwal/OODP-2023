#include <iostream>
using namespace std;
class Sum
{
private:
    int a, b;

public:
    void getdata(int, int);
    void getsum();
};

void Sum::getdata(int x, int y)
{
    a = x;
    b = y;
}
void Sum::getsum()
{
    int s;
    s = a + b;
    cout << "\nThe sum is :" << s << endl;
}
int main()
{
    Sum S;
    int a, b;
    cout << "\nEnter the two numbers: ";
    cin >> a >> b;
    S.getdata(a, b);
    S.getsum();
    return (0);
}