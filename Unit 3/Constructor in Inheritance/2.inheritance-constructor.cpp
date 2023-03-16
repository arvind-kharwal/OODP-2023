#include <iostream>
using namespace std;
class Example
{
    int a,b;
    public:
        Example()
        {
            cout<<"Default Constructor from Example Class"<<endl;
        }
};
class Test:public Example
{
};
int main()
{
    Test T1;
    return(0);
}