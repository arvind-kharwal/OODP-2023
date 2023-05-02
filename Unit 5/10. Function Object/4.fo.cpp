#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40, 50};
    int r[5];
    transform(b, b + 5, a, r, divides<>());
    for (int i = 0; i < 5; i++)
        cout << r[i] << " ";
    return (0);
}