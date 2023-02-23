#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        Example();
        void display();
};
Example::Example()
{
    cout<<"Enter the Marks: ";
    cin>>a>>b;
}
void Example::display()
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    Example E1;
    E1.display();
    Example E2(E1);
    E2.display();
    return(0);
}