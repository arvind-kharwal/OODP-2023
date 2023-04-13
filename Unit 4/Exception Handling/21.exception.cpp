#include<iostream>
#include<exception>
using namespace std;
class Example:public exception
{
    public:
        void display()
        {
            cout<<"Division not possible!"<<endl;
        }

};
int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            Example E1;
            throw(E1);
        }
        else
        {
            cout<<"The division is: "<<a/b<<endl;
        }
    }
    catch (Example E)
    {
        E.display();
    }
    return(0);
}