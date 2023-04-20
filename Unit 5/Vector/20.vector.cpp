#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    if (v.empty() == 1)
        cout << "Empty";
    else
        cout << "Not Empty";
    return (0);
}
