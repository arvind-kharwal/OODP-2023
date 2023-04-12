#include <iostream>
using namespace std;
void fun()
{
    throw(10);
}
void function()
{
    throw(6.5);
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
        else
            function();
    }
    catch (int e)
    {
        cout << "int exception Handled" << endl;
    }
    catch(double d)
    {
        cout<<"Double exception handled"<<endl;
    }
    cout << "The End" << endl;
    return (0);
}