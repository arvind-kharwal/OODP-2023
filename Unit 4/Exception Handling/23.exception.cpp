#include <iostream>
using namespace std;
void divide(int x,int y)
{
    try
    {
        if(y==0)
            throw(1);
        else
            cout<<x/y<<endl;
    }
    catch(int e)
    {
        throw;
    }

}
int main()
{
    try
    {
    divide(10,2);
    divide(24,0);
    }
    catch(int)
    {
        cout<<"Exceptions handled"<<endl; 
    }

    return(0);
}