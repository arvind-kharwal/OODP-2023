#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> M;
    map<int, string>::iterator i;
    M.insert({1,10}); // it will give you an error. 
    for (i = M.begin(); i != M.end(); i++)
        cout << (*i).first << ": " << (*i).second << endl;
    return (0);
}