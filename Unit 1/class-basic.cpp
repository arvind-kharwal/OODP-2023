#include <iostream>
using namespace std;
class Sum
{
    // private:
    int a, b;
    // int a = 10, b = 20;
    // // cout << "Enter the numbers:";
    // // cin >> a >> b;

public:
    void getdata()
    {
        a = 10;
        b = 20;
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
    s1.getdata();
    s1.getsum();
    return (0);
}