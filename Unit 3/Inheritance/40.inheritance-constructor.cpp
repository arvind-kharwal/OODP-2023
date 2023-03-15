#include <iostream>
using namespace std;
class Example
{
    int a,b;
    public:
        Example()
        {
            cout<<"Default Constructor from Example Class"<<endl;
        }
        // Example(int x,int y)
        // {
        //     cout<<"Constructor from Example Class"<<endl;
        //     a = x;
        //     b = y;
        // }
};
class Test:public Example
{
    int c,d;
    public:
        Test(int x,int y)
        {
            cout<<"Constructor from Test Class"<<endl;
            c = x;
            d = y;
        }
};
int main()
{
    Test T1(10,20);
    return(0);
}