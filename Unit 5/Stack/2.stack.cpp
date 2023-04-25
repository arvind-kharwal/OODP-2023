#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> S;
    S.push(5);
    S.push(10);
    cout<<S.top()<<" ";
    return(0);
}