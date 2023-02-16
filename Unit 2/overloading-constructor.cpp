#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        Example();
        Example(int,int);
        void display();
        ~Example();
};
Example::Example()
{
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b;
}
Example::Example(int x,int y)
{
    a = x;
    b = y;
}
Example:: ~Example()
{
    cout<<"Object Has been deleted"<<endl;
}
void Example::display()
{
    int s = a+b;
    cout<<"The sum is:"<<s<<endl;
}
int main()
{
    Example E1;
    E1.display();
    Example E2(100,200);
    E2.display();
    return(0);
}