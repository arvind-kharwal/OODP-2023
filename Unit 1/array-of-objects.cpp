#include<iostream>
using namespace std;
class Example
{
    private:
        int a;
    public:
        void getdata();
        void display();
};
void Example::getdata()
{
    cout<<"Enter the data ";
    cin>>a;
}
void Example::display()
{
    cout<<"\nThe a is: "<<a<<endl;
}
int main()
{
    Example E[3];
    //cout<<"\nEnter the Data";
    for(int i=0;i<3;i++)
        E[i].getdata();
    for(int i=0;i<3;i++)
        E[i].display();
    return(0);
}