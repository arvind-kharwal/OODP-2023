#include <iostream>
using namespace std;
class Leap
{
private:
    int y;

public:
    void getyear(int);
    void checkleap();
};
void Leap::getyear(int n)
{
    y = n;
}
void Leap::checkleap()
{
    if ((y % 100 == 0) && (y % 400 == 0) || (y % 100 != 0) && (y % 4 == 0))
        cout << "Leap Year" << endl;
    else
        cout << "Not Leap Year" << endl;
}
int main()
{
    Leap L;
    int y;
    cout << "\nEnter the year: ";
    cin >> y;
    L.getyear(y);
    L.checkleap();
    return (0);
}