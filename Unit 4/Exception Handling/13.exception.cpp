#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "enter the number: " << endl;
    cin >> i;
    cout << "I am in Main" << endl;
    try
    {
        cout << "I am in Try" << endl;
        if (i < 5)
            throw 1;
        else
            throw 5.4;
    }
    catch (double d)
    {
        cout << "I am in catch double: " << d << endl;
    }
    catch (int e)
    {
        cout << "I am in catch int: " << e << endl;
    }
    cout << "The End" << endl;
    return (0);
}