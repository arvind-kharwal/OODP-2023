#include<iostream>
using namespace std;
class Sumofdigit
{
        long int n;
    public:
        void getnum(long int x)
        {
            n = x;
        }
        long int sod()
        {
            int i = 0;
            long int s=0;
            while(n>0)
            {
                int a = n%10;
                s = s*10+a;
                n = n/10;
            }
            return(s);
        }

};
int main()
{
    Sumofdigit S;
    long int n;
    cout<<"Enter the number: ";
    cin>>n;
    S.getnum(n);
    int r = S.sod();
    cout<<"\nThe sum of digits is :"<<r;
}