#include <iostream>
using namespace std;
int main()
{
    try
    {
        cout << "I am in Try" << endl;
        throw;
    }
    catch (int e)
    {
        cout << "I am in Catch" << endl;
    }
    return (0);
}
