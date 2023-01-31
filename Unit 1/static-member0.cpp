#include<iostream>
using namespace std;
class Test
{
        static int b;
    public:
        static void display()
        {
            cout<<b<<endl;
        }
};
int Test::b;
int main()
{
    Test::display();
    return(0);
}