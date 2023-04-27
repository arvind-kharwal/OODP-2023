#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> M;
    map<int, string>::iterator i;
    M[0]="Arvind";
    M[2]="Amit";
    M[3]="C++";
    for (i = M.begin(); i != M.end(); i++)
        cout << (*i).first << ": " << (*i).second << endl;
    return (0);
}