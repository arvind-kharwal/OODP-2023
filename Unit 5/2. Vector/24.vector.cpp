#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v = {1, 2, 3, 4,5,6};
    vector<int>::iterator i,j;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    i = v.begin();
    j = v.end();
    j--;
    v.erase(i,j);
    cout<<"\nafter erasing"<<endl;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
return(0);
}