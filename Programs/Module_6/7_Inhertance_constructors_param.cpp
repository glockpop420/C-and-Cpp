// C++ program to show how to call parameterized Constructor
// of base class when derived class's Constructor is called

#include <iostream>
using namespace std;

// base class
class Parent {
	int x;

public:
	// base class's parameterized constructor
	Parent(int i)
	{
		x = i;
		cout << "Inside base class's parameterized constructor" << endl;
	}
};

// sub class
class Child : public Parent 
{
public:
	// sub class's parameterized constructor
	Child(int x): Parent(x)
	{
		cout << "Inside sub class's parameterized constructor" << endl;
		cout << x ;
	}
};

// main function
int main()
{

	// creating object of class Child
	Child obj1(100);
	return 0;
}

