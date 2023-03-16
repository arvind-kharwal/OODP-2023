#include<iostream>
using namespace std;
class A
{
    public:
        void display()
        {
            cout<<"Class A Display Function"<<endl;
        }
};
class B:public A
{
    public:
        void display()
        {
            cout<<"Class B Display Function"<<endl;
        }
        void show()
        {
            cout<<"Class B Show Function"<<endl;
        }
};
int main()
{
    A A1,*P;
    B B1;
    P=&B1;
    P->display();
    return(0);
}