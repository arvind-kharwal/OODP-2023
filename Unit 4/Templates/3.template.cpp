#include <iostream>
using namespace std;
int big(int x, int y)
{
    if (x > y)
        return (x);
    else
        return (y);
}
double big(double x, double y)
{
    if (x > y)
        return (x);
    else
        return (y);
}
int main()
{
    int r = big(10, 20);
    cout << r << endl;
    double s = big(452.6, 78.3);
    cout << s << endl;
    return (0);
}