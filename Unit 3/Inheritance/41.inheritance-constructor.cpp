#include <iostream>
using namespace std;
class Example
{
    int a,b;
    public:
        // Example(int x,int y)
        // {
        //     cout<<"Default Constructor from Example Class"<<endl;
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
            c = x;
            d = y;
        }
        void display()
        {
            cout<<c<<" "<<d<<endl;
        }
};
int main()
{
    Test T1=Test(10,20);
    T1.display();
    return(0);
}