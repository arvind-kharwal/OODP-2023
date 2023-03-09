#include <iostream>
using namespace std;
class Student
{
protected:
    int r;

public:
    void getroll(int x)
    {
        r = x;
    }
    void printroll()
    {
        cout << "The Roll number is" << r << endl;
    }
};
class Test : private Student
{
protected:
    int s1, s2;

public:
    void getmarks(int x, int y)
    {
        getroll(3);
        printroll();
        s1 = x;
        s2 = y;
    }
    void putmarks()
    {
        cout << "The marks are: " << s1 << " " << s2 << endl;
    }
};
class Result : public Test
{
    int total;

public:
    void display()
    {
        total = s1 + s2;
        cout << "The total marks: " << total << endl;
    }
};
int main()
{
    Result R1;
    R1.getmarks(78, 87);
    R1.putmarks();
    R1.display();
    return (0);
}