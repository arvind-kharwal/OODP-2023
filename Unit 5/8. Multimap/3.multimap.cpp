#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,int> M;
    M.insert({1,10});
    M.insert({2,20});
    M.insert({3,30});
    multimap<int,int>::iterator i;
    for(i=M.begin();i!=M.end();i++)
        cout<<(*i).first<<":"<<(*i).second<<endl;
    return(0);
}