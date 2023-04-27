#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v = {1, 2, 3, 4,5,6};
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
        v.erase(v.end()-1);
    cout<<"\nAfter erasing first element"<<endl;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
return(0);
}