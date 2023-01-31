#include <iostream>
using namespace std;
class Student
{
    int marks[5];

public:
    void getmarks();
    void total();
};

void Student::getmarks()
{
    cout << "\nEnter the marks";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}
void Student::total()
{
    int t = 0;
    for (int i = 0; i < 5; i++)
    {
        t = t + marks[i];
    }
    cout << "\nThe total marks are: " << t << endl;
}
int main()
{
    Student S;
    S.getmarks();
    S.total();
    return (0);
}