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
        cout << "The roll number is " << r << endl;
    }
};
class Test : virtual public Student
{
protected:
    int sub1, sub2;

public:
    void getmarks(int x, int y)
    {
        sub1 = x;
        sub2 = y;
    }
    void putmarks()
    {
        cout << sub1 << " " << sub2 << endl;
    }
};
class Sport : virtual public Student
{
protected:
    int score;

public:
    void getscore(int x)
    {
        score = x;
    }
    void putscore()
    {
        cout << score << endl;
    }
};
class Result : public Test, public Sport
{
    int total;

public:
    void display()
    {
        total = sub1 + sub2 + score;
        cout << "The total marks: " << total << endl;
    }
};
int main()
{
    Result R1;
    R1.getroll(5);
    R1.printroll();
    R1.getmarks(88, 99);
    R1.putmarks();
    R1.getscore(78);
    R1.putscore();
    R1.display();
    return (0);
}