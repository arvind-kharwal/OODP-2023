#include <iostream>
using namespace std;
class A
{
    public:
        virtual void display()=0;
};
class B:public A
{
    public:
        void display()
        {
            cout<<"display in B"<<endl;
        }
};
int main()
{
    // A A1;
    // A1.display();
    B B1;
    B1.display();
    return(0);
}