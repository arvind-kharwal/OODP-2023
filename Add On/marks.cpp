#include<iostream>
using namespace std;
class Example
{
    int a[5];
    public:
        void getmarks();
        int totalmarks();
};
void Example::getmarks()
{
    cout << "Enter 5 marks: ";
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
    }
}
int Example::totalmarks()
{
    int total = 0;
    for(int i=0; i<5; i++)
    {
        total += a[i];
    }
    return total;
}
int main()
{
    Example E;
    E.getmarks();
    int r = E.totalmarks();
    cout << "The total marks are: "<< r << endl;
    return 0;
}