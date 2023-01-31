#include <iostream>
using namespace std;
class Item
{
public:
    static int i;
};
int Item::i;
int main()
{
    cout << Item::i << endl;
    return (0);
}