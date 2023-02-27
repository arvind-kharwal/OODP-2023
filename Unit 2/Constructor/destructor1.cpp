#include<iostream>
using namespace std;
class Example
{
    public:
    
        Example();
        ~Example();
};
Example::Example()
{
    cout<<"The Object has been created: "<<endl;
    
}
Example::~Example()
{
    cout<<"The Object has been destroyed: "<<endl;
    
}
int main()
{
    Example E1,E2,E3;
    return(0);
}