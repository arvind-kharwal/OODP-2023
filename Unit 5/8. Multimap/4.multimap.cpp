#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,string> M =  {{1, "Arvind"}, {2, "Adesh"}, {3, "Aryadeep"}};
    multimap<int,string>::iterator i;
    for(i=M.begin();i!=M.end();i++)
        cout<<(*i).first<<":"<<(*i).second<<endl;
    return(0);
}