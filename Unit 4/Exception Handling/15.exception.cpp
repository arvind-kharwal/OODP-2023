#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void divide()
    {
        if (b == 0)
        {
            throw 6;
        }
        int r = a / b;
        cout << "The division is: " << r << endl;
    }
};
int main()
{
    Example E;
    int x, y;
    cout << "Enter the numbers: " << endl;
    cin >> x >> y;
    E.getdata(x, y);
    try
    {
        E.divide();
    }
    catch (int e)
    {
        cout << "The division is not possible " << endl;
    }
    return (0);
}