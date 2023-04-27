#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> S;
    S.push(5);
    S.push(10);
    while(!S.empty())
    {
        cout<<S.top()<<" ";
        S.pop();
    }
    return(0);
}