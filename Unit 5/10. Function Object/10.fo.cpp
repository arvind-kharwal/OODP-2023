#include <iostream>
#include <algorithm>
using namespace std;
#include <array>
int main()
{
    array<int, 5> A1 = {1, 2, 3, 4, 5};
    array<int, 5> A2 = {10, 20, 30, 40, 50};
    transform(A1.begin(), A1.end(), A2.begin(), A1.begin(), minus<int>());
    array<int, 5>::iterator i;
    for (i = A1.begin(); i != A1.end(); i++)
        cout << *i << " ";
    return (0);
}