#include <iostream>
using namespace std;
class Sum
{
private:
    int a, b;
    void getsum();

public:
    void getdata(int, int);
};
void Sum::getdata(int x, int y)
{
    a = x;
    b = y;
    getsum();
}
void Sum::getsum()
{
    int s = a + b;
    cout << "\nThe sum is: " << s << endl;
}
int main()
{
    Sum S;
    int a, b;
    cout << "\nEnter the numbers: ";
    cin >> a >> b;
    S.getdata(a, b);
    return (0);
}