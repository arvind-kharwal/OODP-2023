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

};