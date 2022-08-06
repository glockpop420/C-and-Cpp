#include <iostream>
using namespace std;

// defining a class template
template <class T> class info 
{
public:
	info(T A) // constructor of type template
	{
		cout << "\n"
			<< "A = " << A
			<< " size of data in bytes:" << sizeof(A);
	} 
}; 


int main()
{
	
	info<char> p('x');
	info<int> q(22);
	info<float> r(2.25);

	return 0;
} 

