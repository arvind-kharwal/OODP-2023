#include <iostream>
using namespace std;
int main()
{
    cout << "I am in Main" << endl;
    try
    {
        throw 10;
        cout << "I am in try" << endl;
    }
    catch (int e)
    {
        cout << "I am in catch: " << e << endl;
    }
    cout << "The End" << endl;
    return (0);
}