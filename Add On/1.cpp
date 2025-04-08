#include<iostream>
using namespace std;
class Example
{
    private:
        //int a;
    public:
    int a;
        // void getdata()
        // {
        //     cout << "Enter a number: ";
        //     cin >> a;
        // }
        void display()
        {
            cout << "The number is: " << a << endl;
        }
};
int main()
{
    Example E;
    E.a = 12;
    // obj.getdata();
    E.display();
    return 0;
}  