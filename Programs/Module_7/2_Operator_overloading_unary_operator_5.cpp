#include<iostream>
using namespace std;
class sign
{
	int n;
	public:
	void get(int x) { n=x; }
	void display() { cout << "value of n is: " << n; }
	void operator - () { n=-n; }		
};
int main()
{
	sign s;
	s.get(10);
	-s;
	s.display();
	return 0;
}
