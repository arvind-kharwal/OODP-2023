#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(8);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    return(0);
}