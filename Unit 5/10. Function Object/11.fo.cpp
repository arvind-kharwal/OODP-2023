#include <iostream>
#include <algorithm>
using namespace std;
int square(int x)
{
    x = x * x;
    return (x);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int r[5];
    transform(a, a + 5, r, square);
    for (int i = 0; i < 5; i++)
        cout << r[i] << " ";
    return (0);
}