#include<iostream>
using namespace std;
class Second;
class First
{
        int a;
    public: 
        void geta(int);
        friend void getsum(First,Second);
};

void First::geta(int x)
{
    a = x;
}
class Second
{
        int b;
    public:
        void getb(int);
        friend void getsum(First,Second);
};
void Second::getb(int y)
{
    b = y;
}

void getsum(First F,Second S)
{
    int s = F.a+S.b;
    cout<<"\nThe sum is: "<<s;
}
int main()
{
    First F1;
    Second S1;
    F1.geta(10);
    S1.getb(20);
    getsum(F1,S1);
    return(0);
}