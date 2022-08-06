#include <iostream>
using namespace std;
class Shape // Abstract Class
{
	protected:
	int width;
	int height;
	public:
		// pure virtual function providing interface framework.
		virtual int getArea() = 0;//Pure virtual function or abstract function
		void setWidth(int w) { width = w; }
		void setHeight(int h) { height = h; }
};
class Rectangle: public Shape 
	{
		public:
		int getArea() { return (width * height); }
	};
class Triangle: public Shape 
	{
		public:
		int getArea() { return (width * height)/2; }
	};
int main(void) 
{
	Rectangle Rect;
	Triangle Tri;
	Rect.setWidth(5);
	Rect.setHeight(7);
	cout<< "Total Rectangle area: " <<Rect.getArea() <<endl;
	Tri.setWidth(5);
	Tri.setHeight(7);
	cout<< "Total Triangle area: " <<Tri.getArea() <<endl;
	return 0;
}
