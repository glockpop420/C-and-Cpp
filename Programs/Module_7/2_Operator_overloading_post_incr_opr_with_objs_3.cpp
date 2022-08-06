#include<iostream>
using namespace std;
class complex 
{
	public:
	int a, b;
void getvalue() 
	{
	cout << "Enter the Two Numbers:";
	cin >> a>>b;
	}
void operator ++(int)
	{
	a++;
	b++;
	}
void display() 
	{
	cout << a << "+\t" << b << "i" << endl;
	}
};
int main() 
{
	complex obj;
	obj.getvalue();
	obj++; // obj.operator ++()
	cout << "postfix Increment Complex Number\n";
	obj.display();
	return(0);
}
