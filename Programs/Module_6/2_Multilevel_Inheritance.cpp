#include <iostream>  
using namespace std;  
class Animal // Parent for B class and grand parent for C class
	{  
   		public:  
 		void eat() { cout<<"Eating..."<<endl; }    
	};  
class Dog: public Animal   // child for A class and parent for C class
   {    
		public:  
     	void bark() { cout<<"Barking..."<<endl; }    
   };   
class BabyDog: public Dog   // child for B class and grand child for A class
   {    
		public:  
     	void weep() { cout<<"Weeping..."; }    
   };   
int main(void) 
{  
	BabyDog d1;  
    d1.eat();  
    d1.bark();  
    d1.weep();  
    return 0;  
}  
