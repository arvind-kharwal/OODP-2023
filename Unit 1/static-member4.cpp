#include <iostream>
using namespace std;
class Item
{
    static int i;

public:
    static void display()
    {
        cout << i << endl;
        i++;
    }
};
int Item::i;
int main()
{
    // //Item I1, I2;
    // I1.display();
    // I2.display();
    Item::display();
    Item::display();
    return (0);
}