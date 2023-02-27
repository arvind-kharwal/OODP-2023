#include<iostream>
using namespace std;
class Example
{
        int a,b;
    public:
        Example(int,int);
        void display();
};
Example::Example(int x,int y)
{
    a = x;
    b = y;
}
void Example::display()
{
    cout<<a<<b;
}
int main()
{
    Example E=Example(10,20);       // explicit 
    E.display();
    return(0);
}