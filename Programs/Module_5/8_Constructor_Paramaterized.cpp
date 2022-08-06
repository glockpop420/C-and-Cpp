#include <iostream>
using namespace std;

// declare a class
class Wall 
{
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt) 
	{
      length = len;
      height = hgt;
    }

    //friend void calculateArea(Wall wall1) 
    calculateArea()
	{
       //cout << length * height;
       return length * height;
    }
};

int main() {
  // create object and initialize data members
  Wall wall1 = Wall(10.0, 8.0); // Explicit call
  Wall wall2(5.0, 8.0); // Implicit call
  //calculateArea(wall1);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
