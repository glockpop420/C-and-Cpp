#include <iostream>
using namespace std;

class A // This is a base class
{
public:
	int x;
protected:
	int y;
private:
	int z;
};

class B : public A // This is derived class // syntax: class class_name_derived_class : acess_specifier class_name_base_class
{
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A
{
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private
	// y is private
	// z is not accessible from D
};

int main(void) 
{ 
   
   cout << "Access Specifier in inheritance " << endl;

   return 0;
}

