#include <iostream>
using namespace std;

class Shape //class
{
   public: //access specifier or class access modifier
      double length;   // Length of a Shape   data members
      double breadth;  // Breadth of a Shape
      double height;   // Height of a Shape
};

int main() 
{
   Shape Shape1;        // Declare Shape1 of type Shape // class_name name_of_object
   Shape Shape2;        // Declare Shape2 of type Shape
   double volume = 0.0;     // Store the volume of a Shape here
 
   // Shape 1 specification
   Shape1.height = 3.0; //dot operator to access the data member in the class
   Shape1.length = 5.0; 
   Shape1.breadth = 7.0;

   // Shape 2 specification
   Shape2.height = 4.0;
   Shape2.length = 6.0;
   Shape2.breadth = 8.0;
   
   // volume of Shape 1
   volume = Shape1.height * Shape1.length * Shape1.breadth;
   cout << "Volume of Shape1 : " << volume <<endl;
   cout << "Address of Shape1 : " << &volume <<endl;

   // volume of Shape 2
   volume = Shape2.height * Shape2.length * Shape2.breadth;
   cout << "Volume of Shape2 : " << volume <<endl;
   cout << "Address of Shape2 : " << &volume <<endl;
   return 0;
}
