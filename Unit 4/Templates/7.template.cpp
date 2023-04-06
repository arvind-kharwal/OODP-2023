#include <iostream>
using namespace std;
template <class T>
void swap(T a,T b)
{
    T t;
    t = a;
    a = b;
    b = t;
    cout<<"The numbers after swapping are: "<<a<<" "<<b<<endl;
}
int main()
{
    swap(10,20);
    swap(10.4,45.3);
    swap("Arvind", "Kharwal");
    return(0);
}