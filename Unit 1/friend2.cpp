#include<iostream>
using namespace std;
class Second;
class First
{
        int a;
    public: 
        void geta(int);
        friend void swap(First,Second);
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
        friend void swap(First,Second);
};
void Second::getb(int y)
{
    b = y;
}
void swap(First F,Second S)
{
    int t = F.a;
    F.a = S.b;
    S.b = t;
    cout<<"\nThe numbers after swapping are: "<<F.a<<" "<<S.b;
}
int main()
{
    First F1;
    Second S1;
    F1.geta(10);
    S1.getb(20);
    swap(F1,S1);
    return(0);
}