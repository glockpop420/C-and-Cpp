#include <iostream>
using namespace std;

class Box 
{
   public:
      static int objectCount;
      
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) //parameterized constructor or function with default args
	  {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;

         // Increase every time object is created
         objectCount++;
      }
      double Volume() 
	  {
         return length * breadth * height;
      }
      static int getCount() // static member function
	  {
         return objectCount;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) 
{
   // Print total number of objects before creating object.
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(1.1, 2.2, 3.3);    // Declare box1
   Box Box2(4.0, 5.0, 6.0);
   Box Box3;
   
	cout <<Box1.Volume() << endl;
	cout <<Box2.Volume() << endl;
	cout <<Box3.Volume() << endl;
   
   // Print total number of objects after creating object.
   cout << "Final Stage Count: " << Box::getCount() << endl;

   return 0;
}
