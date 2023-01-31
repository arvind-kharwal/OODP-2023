#include <iostream>
using namespace std;
class Item
{
    static int i;
    int a;

public:
    void display()
    {
        cout << a << endl;
        cout << i << endl;
    }
};
int Item::i;
int main()
{
    Item I1;
    I1.display();
    return (0);
}