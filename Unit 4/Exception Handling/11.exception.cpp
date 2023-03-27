#include <iostream>
using namespace std;
int main()
{
    int i = 3;
    cout << "I am in Main" << endl;
    try
    {
        cout << "I am in Try" << endl;
        if (i == 1)
            throw 1;
        if (i == 2)
            throw 2;
        if (i == 3)
            throw 3;
    }
    catch (int e)
    {
        cout << "I am in catch: " << e << endl;
    }
    cout << "The End" << endl;
    return (0);
}