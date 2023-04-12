#include <iostream>
using namespace std;
void fun()
{
    throw(10);
}
int main()
{
    int i;
    cout << "Enter the number: ";
    cin >> i;
    cout << "I am in main" << endl;
    try
    {
        if (i == 3)
            fun();
    }
    catch (int e)
    {
        cout << "exception Handled" << endl;
    }
    cout << "The End" << endl;
    return (0);
}