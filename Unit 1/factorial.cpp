#include <iostream>
using namespace std;
class Factorial
{
    int n;

public:
    void getnum(int);
    void fact();
};
void Factorial::getnum(int x)
{
    n = x;
}
void Factorial::fact()
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    cout << "\nThe Factorial is: " << f << endl;
}
int main()
{
    Factorial F;
    int n;
    cout << "\nEnter the number: ";
    cin >> n;
    F.getnum(n);
    F.fact();
    return (0);
}