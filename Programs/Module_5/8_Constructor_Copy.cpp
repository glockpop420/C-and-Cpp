#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x1, int y1) //parameterized constructor
	{ 
		x = x1; 
		y = y1; 
	}

	Point(const Point &p1) // Copy constructor  name_of_constructor/class(const class &Prev_object_name)
	{
		x = p1.x; 
		y = p1.y; 
	}

	int getX()		 
	{ 
		return x; 
	}
	int getY()		 
	{ 
		return y; 
	}
};

int main()
{
	Point p1(10, 15); // parameterized constructor is called here
	Point p2 = p1; // Copy constructor is called here 

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

	return 0;
}

