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
class Child:public Parent
{
    public:
        void show()
        {
            cout<<"\nThe show for protected: "<<a<<" "<<b<<endl;
        }
};

int  main()
{
    Child C1;
    C1.getdata(10,20);
    C1.show();
    return(0);
}