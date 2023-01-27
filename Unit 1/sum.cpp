#include<iostream>
using namespace std;
class Sum
{
    private:
        int a,b;
    public:
        void getdata()
        {
            cout<<"Enter the two numbers: ";
            cin>>a>>b;
        }
        void getsum()
        {
            int s = a+b;
            cout<<"\nThe sum is :"<<s;
        }
};
int main()
{
    Sum S;
    S.getdata();
    S.getsum();
    return(0);
}