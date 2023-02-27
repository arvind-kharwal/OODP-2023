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
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b;
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
    return(0);
}