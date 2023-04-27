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
    return (0);
}