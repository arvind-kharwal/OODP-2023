#include <iostream>
using namespace std;
int big(int x, int y)
{
    if (x > y)
        return (x);
    else
        return (y);
}
int main()
{
    int r = big(10, 20);
    cout << r << endl;
    return(0);
}