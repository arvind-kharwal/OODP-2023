#include <iostream>
using namespace std;
int main()
{
    cout << "I am in Main" << endl;
    try
    {
        throw 10;
        cout << "I am in Try" << endl;
    }
    catch (int e2)
    {
        cout << "I am in catch int e2" << endl;
    }
    catch (int e1)
    {
        cout << "I am in catch int e1" << endl;
    }
    cout << "The End" << endl;
    return (0);
}