#include <iostream>
using namespace std;
namespace first
{
    int a = 5;
}

namespace second
{
    double a = 3.1416;
}

int main ()
{
    int a = 10;
    cout<<a<<endl;
    cout << first::a << endl;
    cout << second::a << endl;
    return 0;
}