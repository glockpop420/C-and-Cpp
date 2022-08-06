#include <iostream>
using namespace std;

// declare a class
class  Wall 
{
  private:
    double length;

  public:
    // default constructor to initialize variable
    Wall() // default constructor
	{
      length = 5.5;
      cout << "Creating a wall." << endl;
      //cout << "Length = " << length << endl;
    }
    friend void print(Wall wall1)
	{
		cout <<wall1.length;
	}
    
};

int main() 
{
  Wall wall1;
  print(wall1);
  //cout << wall1.length;
  return 0;
}
