#include <iostream>
using namespace std;
class Example
{
    public:
        Example()
        {
            cout<<"Constructor from Example Class"<<endl;
        }
};
class Test:public Example
{
    public:
        Test()
        {
            cout<<"Constructor from Test Class"<<endl;
        }
};
int main()
{
    Test T1;
    return(0);
}