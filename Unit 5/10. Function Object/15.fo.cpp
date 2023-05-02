#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
void square(int i)
{
    i = i*i;
    cout<<"The square is: "<<i<<endl;
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    for_each(v.begin(),v.end(),square);
    return(0);
}