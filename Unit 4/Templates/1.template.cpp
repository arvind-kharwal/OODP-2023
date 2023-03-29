#include <iostream>
using namespace std;
int sum(int x, int y)
{
    int s = x + y;
    return (s);
}
double sum(double x, double y)
{
    double s = x + y;
    return (s);
}
int main()
{
    int r1 = sum(10, 20);
    cout << "The sum is: " << r1 << endl;
    double r2 = sum(10.4, 45.3);
    cout << "The sum is: " << r2 << endl;
    return (0);
}