#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void display()  { cout << "Inherited from Class A" << endl; }  
};  
class B  
{  
    public:  
    void display() { cout << "Inherited from Class B" << endl; }  
};  
class C : public A, public B  
{  
    void view()  
    {  
        void display();  
        //A :: display();
		//B :: display();
    }  
};  
int main()  
{  
    C c;  
    c.display (); 
    //c.B::display ();  
    return 0;  
}  
