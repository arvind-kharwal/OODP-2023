#include<iostream>
using namespace std;
class Example
{
        int a;
    public:
        void getdata(int);
        void display();
};
inline void Example::getdata(int x)
{
    a = x;
}
inline void Example::display()
{
    cout<<a<<endl;
}
int main()
{
    Example E1,E2;
    E1.getdata(10);
    E1.display();
    cout<<"Second Object"<<endl;
    E1.getdata(20);
    E1.display();
}