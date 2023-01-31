#include <iostream>
using namespace std;
class Item
{
    static int i;

public:
    static void display()
    {
        cout << i << endl;
    }
};
int Item::i;
int main()
{
    Item::display();
    return (0);
}