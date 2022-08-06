 #include <iostream>  
using namespace std;  
class Animal //base class
 {  
   public:  
 	void eat() { cout<<"Eating..."<<endl; }    
   };  
   class Dog: public Animal    // derived class or child class
   {    
    public:  
    void bark() { cout<<"Barking...";   
     }    
   };   
int main(void) 
{  
    Dog d1;  
    d1.eat();  
    d1.bark();  
    return 0;  
}  
