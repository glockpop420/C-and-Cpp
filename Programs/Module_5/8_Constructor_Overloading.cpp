#include <iostream>
using namespace std;

class construct
{

public:
	float area;
	construct() // Default Constructor with no parameters
	{
		area = 0;
	}
	
	
	construct(int a, int b) // Constructor with two parameters
	{
		area = a * b;
	}
	
	construct (construct const &o2)//copy
		{
			area = o2.area;
		}
	void disp()
	{
		cout<< area<< endl;
	}
};

int main()
{
	// Constructor Overloading
	// with two different constructors
	// of class name
	construct o1;
	construct o2(10, 20);
	construct o3(o2); //passing object as an argument 
	
	o1.disp();
	o2.disp();
	o3.disp();
	return 1;
}

