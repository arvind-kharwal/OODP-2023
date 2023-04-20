#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator i,j;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    for(i=v.begin();i!=v.end();i++)
    {
        if(*i%2==0)
            v.erase(i);
    }
    cout<<"\nThe odd elements are: "<<endl;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
return(0);
}