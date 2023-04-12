#include <iostream>
using namespace std;

class demo1 {
};

class demo2 {
};

int main()
{
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    try  
    {
	    if (i == 1)
			throw demo1();
		else
			throw demo2();
	}
	catch (demo1 d1) 
    {
		cout << "Caught exception of demo1 class \n";
    }
	catch (demo2 d2) 
    {
		cout << "Caught exception of demo2 class \n";
	}
    return(0);
}
