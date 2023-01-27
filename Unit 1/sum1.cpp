#include<iostream>
using namespace std;
class Sum
{
    private:
        int a,b;
    public:
        void getdata(int x, int y)
        {
            a = x;
            b= y;
        }
        int getsum()
        {
            int s = a+b;
            return(s);
        }
};
int main()
{
    Sum S;
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    S.getdata(a,b);
    int r = S.getsum();
    cout<<"\nThe sum is :"<<r;
    return(0);
}