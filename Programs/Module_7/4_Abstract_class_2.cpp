#include<iostream>
using namespace std;
class BaseClass //Abstract class
{
	public:
	virtual void Display1()=0; // Pure virtual function 1
	virtual void Display2()=0; // Pure virtual function 2
	void Display3() { cout<<"\nThis is Display3() method of Base Class"; }
};
class DerivedClass : public BaseClass
{
	public:
	void Display1() { cout<<"\nThis is Display1() method of Derived Class"; }
	void Display2() { cout<<"\nThis is Display2() method of Derived Class"; }
};
int main()
{
	DerivedClass D;
	D.Display1();
	D.Display2();
	D.Display3();
return 0;
}
