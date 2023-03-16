#include<iostream>
using namespace std;
class A
{
    public:
        void display()
        {
            cout<<"Display in A"<<endl;
        }
        virtual void show()
        {
            cout<<"Show in A"<<endl;
        }
};
class B:public A
{
    public:
        void display()
        {
            cout<<"Display in B"<<endl;
        }
        void show()
        {
            cout<<"Show in B"<<endl;
        }
};
int main()
{
    A A1;
    B B1;
    A *P;
    P = &A1;
    P->display();
    P->show();
    cout<<"=========="<<endl;
    P = &B1;
    P->display();
    P->show();
    return(0);
}