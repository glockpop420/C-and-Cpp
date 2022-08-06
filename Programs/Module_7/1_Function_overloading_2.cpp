#include <iostream>    
using namespace std;    
class Cal 
{    
	public:    
		int add(int a,int b) {  return a + b;  }      
		int add(int a, int b, int c) { return a + b + c; }      
		int add(double a, double b, double c) { return a + b + c; }      
};     
int main(void) {    
    Cal C;                                                    //     class object declaration.   
    cout<<C.add(10, 20)<<endl;      
    cout<<C.add(30, 40, 50)<<endl;; 
	cout<<C.add(60, 70, 80);     
   return 0;    
}    
