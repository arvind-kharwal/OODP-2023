#include <iostream>
using namespace std;

class Example1 {
};

class Example2 {
};

int main()
{
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    try  
    {
	if (i == 1)
			throw Example1();
		else
			throw Example2();
	}
	catch (Example1 E1) 
    {
		cout << "Caught exception of demo1 class \n";
    }
	catch (Example2 E2) 
    {
		cout << "Caught exception of demo2 class \n";
	}
    return(0);
}
