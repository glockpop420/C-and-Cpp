// C++ program to show the order of constructor call
// in single inheritance

#include <iostream>
using namespace std;

// base class
class Parent
{
	public:
	
	// base class constructor
	Parent()
	{
		cout << "First parent (base) class constructor will executed" << endl;
	}
};

// sub class
class Child : public Parent
{
	public:
	
	//sub class constructor
	Child()
	{
		cout << "Then only child class (derived) will executed" << endl;
	}
};

// main function
int main() 
{
	
	// creating object of sub class
	Child obj;
	
	return 0;
}

