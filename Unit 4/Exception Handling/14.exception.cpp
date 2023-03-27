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
        if (i == 1)
            throw 1;
        if (i == 2)
            throw 2;
        if (i == 3)
            throw 5.4;
    }
    catch (int e)
    {
        cout << "I am in catch: " << e << endl;
    }
    catch (...)
    {
        cout << "I am in catch that can handle all exception: " << endl;
    }
    cout << "The End" << endl;
    return (0);
}