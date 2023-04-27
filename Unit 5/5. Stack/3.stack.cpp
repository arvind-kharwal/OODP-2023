#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> S;
    S.push(5);
    S.push(10);
    S.push(15);
    cout<<S.size()<<" ";
    return(0);
}