#include <iostream>
using namespace std;
class Shape 
{
   public:
      double length;   // Length of a Shape
      double breadth;  // Breadth of a Shape
      double height;   // Height of a Shape
};

int main() 
{
   Shape Shape1;        // Declare Shape1 of type Shape
   Shape Shape2;        // Declare Shape2 of type Shape
   double volume = 0.0;     // Store the volume of a box here
 
   // Shape 1 specification
   Shape1.height = 5.0; 
   Shape1.length = 6.0; 
   Shape1.breadth = 7.0;

   // Shape 2 specification
   Shape2.height = 10.0;
   Shape2.length = 12.0;
   Shape2.breadth = 13.0;
   
   // volume of Shape1
   volume = Shape1.height * Shape1.length * Shape1.breadth;
   cout << "Volume of Shape1 : " << volume <<endl;

   // volume of Shape2
   volume = Shape2.height * Shape2.length * Shape2.breadth;
   cout << "Volume of Shape2 : " << volume <<endl;
   return 0;
}
