#include<iostream>
using namespace std;
class Base
	{
		public:
		void show() { cout<< "Base class\t"; }
	};
class Derived: public Base
	{
		public:
		void show() { cout<< "Derived Class"; } 
	};
int main()
{
	Base b;
	Derived d;
	b.show();
 	d.show(); 
}
