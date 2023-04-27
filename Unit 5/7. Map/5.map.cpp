#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> M;
    map<int, string>::iterator i;
    M.insert(pair<int,string>(1,"C"));
    M.insert(pair<int,string>(2,"C++"));
    M.insert(pair<int,string>(3,"Python"));
    for (i = M.begin(); i != M.end(); i++)
        cout << (*i).first << ": " << (*i).second << endl;
    map<int, string> M1(M);
    cout<<"\nMap M1"<<endl;
    for (i = M1.begin(); i != M1.end(); i++)
        cout << (*i).first << ": " << (*i).second << endl;
    return (0);
}