// overloading of generic functions
#include <iostream>
using namespace std;
template <class T>
void display(T a)
{
    cout<<a<<endl;
}
void display(int x)
{
    cout<<x<<endl;
}
int main()
{
    display(3);
    display(3.76);
    display("Arvind");
    return(0);
}