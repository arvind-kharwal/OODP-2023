#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the numbers: " << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw(10);
        else
            cout << "The division is: " << a / b;
    }
    catch (int e)
    {
        cout << "Division is not possible" << endl;
    }
    return (0);
}