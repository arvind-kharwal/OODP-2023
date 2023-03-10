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
        cout << "The Roll number is: " << r << endl;
    }
};
class Test : public Student
{
protected:
    int s1, s2;

public:
    void getmarks(int x, int y)
    {
        s1 = x;
        s2 = y;
    }
    void putmarks()
    {
        cout << "The marks are: " << s1 << " " << s2 << endl;
    }
};
class Result : private Test
{
    int total;

public:
    void display()
    {
        getroll(4);
        printroll();
        getmarks(99, 88);
        putmarks();
        total = s1 + s2;
        cout << "The total marks: " << total << endl;
    }
};
int main()
{
    Result R1;
    R1.display();
    return (0);
}