#include <iostream>
using namespace std;
class Example
{
    int a,b;
    public:
        Example(int x,int y)
        {
            cout<<"Parametrized Constructor from Example Class"<<endl;
            a = x;
            b = y;
            cout<<a<<" "<<b<<endl;
        }
};
class Test:public Example
{
    int c,d;
    public:
        Test(int x,int y):Example(x,y)
        {
            cout<<"Parametrized Constructor from Test Class"<<endl;
            c = x;
            d = y;
            cout<<c<<" "<<d<<endl;
        }
};
int main()
{
    Test T1(100,44);
    return(0);
}