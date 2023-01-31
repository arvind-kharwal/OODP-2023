#include <iostream>
using namespace std;
class Sum
{

    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getsum()
    {
        int s = a + b;
        cout << "\nThe sum is: " << s << endl;
    }
};

int main()
{
    Sum s1;
    int a, b;
    cout << "Enter the numbers:";
    cin >> a >> b;
    s1.getdata(a, b);
    s1.getsum();
    return (0);
}