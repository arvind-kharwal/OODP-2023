#include <iostream>
using namespace std;
class Father
{
public:
    void display()
    {
        cout << "Bajaj Scooter" << endl;
    }
};
class Son : public Father
{
public:
    void display()
    {
        cout << "Pulsor Bike" << endl;
    }
};
int main()
{
    Son S1;
    S1.display();
    return (0);
}