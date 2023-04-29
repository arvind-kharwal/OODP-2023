#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,int> M;
    M.insert(pair<int,int>(1,10));
    M.insert(pair<int,int>(2,20));
    M.insert(pair<int,int>(3,30));
    M.insert(pair<int,int>(4,40));
    M.insert(pair<int,int>(5,50));
    multimap<int,int>::iterator i;
    for(i=M.begin();i!=M.end();i++)
        cout<<(*i).first<<":"<<(*i).second<<endl;
    cout<<M.size()<<endl;
    return(0);
}