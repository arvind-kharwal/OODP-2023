#include <iostream>
using namespace std;
int main()
{
    try
    {
        
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw 10;
        else
            cout<<a/b<<endl;
    }
    catch(int e)
    {
        throw;
    }
    }
    catch(...)
    {
        cout<<"Exception handled by ellipsis";

    }
}