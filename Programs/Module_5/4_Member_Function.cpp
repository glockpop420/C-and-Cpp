#include <iostream>
using namespace std;

class Shape 
{
   public:
      double length;         // Length of a Shape
      double breadth;        // Breadth of a Shape
      double height;         // Height of a Shape

      // Member functions declaration
      double getVolume(void);
      void setLength(double len);
      void setBreadth(double bre);
      void setHeight(double hei);
};

// Member functions definitions
double Shape::getVolume(void) // return_type Class_name::Member_function_name(arguments)
{
return length * breadth * height;
}

void Shape::setLength(double ln) 
{
   length = ln;
}

void Shape::setBreadth(double br) 
{
   breadth = br;
}
void Shape::setHeight(double ht) 
{
   height = ht;
}

// Main function for the program
int main() 
{
   Shape Shape1;                // Declare Shape1 of type Box      class_name object_name
   Shape Shape2;                // Declare Shape2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Shape1.setLength(6.0);  // using dot operator we can access the members of a class
   Shape1.setBreadth(7.0); 
   Shape1.setHeight(5.0);

   // box 2 specification
   Shape2.setLength(12.0); 
   Shape2.setBreadth(13.0); 
   Shape2.setHeight(10.0);
   
   // volume of Shape1
   volume = Shape1.getVolume();
   cout << "Volume of Shape1 : " << volume <<" " << &volume << endl;

   // volume of Shape2
   volume = Shape2.getVolume();
   cout << "Volume of Shape2 : " << volume << " " << &volume << endl;
   return 0;
}
