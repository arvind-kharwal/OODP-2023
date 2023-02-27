#include<iostream>
using namespace std;
class Example
{
        static int n;
    public:
    
        Example();
        ~Example();
};
int Example::n;
Example::Example()
{
    n++;
    cout<<"The Object has been created: "<<n<<endl;
    
}
Example::~Example()
{
    cout<<"The Object has been destroyed: "<<n<<endl;
    n--;
    
}
int main()
{
    Example E1,E2,E3;
    return(0);
}