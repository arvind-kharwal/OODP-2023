#include <iostream>
using namespace std;
class Parent
{
    protected:
        int a,b;
    public:
        void getdata(int x,int y)
        {
            a = x;
            b = y;
        }
};
class Child:protected Parent
{
    public:
        void show()
        {
            getdata(10,34);
            cout<<"\nThe show for protected: "<<a<<" "<<b<<endl;
        }
};

int  main()
{
    Child C1;
    C1.show();
    return(0);
}