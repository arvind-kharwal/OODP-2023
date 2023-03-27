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
        if (b == 0)
        {
            throw 6;
        }
    }
    void divide()
    {

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
    try
    {
        E.getdata(x, y);
    }
    catch (int e)
    {
        cout << "The division is not possible " << endl;
    }
    E.divide();
    return (0);
}