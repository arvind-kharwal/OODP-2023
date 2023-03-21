#include <iostream>
using namespace std;
class Animal
{
private:
    string type;

public:
    Animal()
    {
        type = "Animal";
    }
    void display()
    {
        cout << type << endl;
    }
};

class Dog : public Animal
{
private:
    string type;

public:
    Dog()
    {
        type = "Dog";
    }
    void display()
    {
        cout << type << endl;
    }
};

class Cat : public Animal
{
private:
    string type;

public:
    Cat()
    {
        type = "Cat";
    }
    void display()
    {
        cout << type << endl;
    }
};
int main()
{
    Animal A1, *P;
    Dog D1;
    Cat C1;
    P = &A1;
    P->display();
    P = &D1;
    P->display();
    P = &C1;
    P->display();
    return (0);
}