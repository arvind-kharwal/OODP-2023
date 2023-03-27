#include <iostream>
using namespace std;
int main()
{
    cout << "I am in Main" << endl;
    try
    {
        throw 10.7;
        cout << "I am in Try" << endl;
    }
    catch (double d)
    {
        cout << "I am in catch double" << endl;
    }
    catch (int e)
    {
        cout << "I am in catch int" << endl;
    }
    cout << "The End" << endl;
    return (0);
}