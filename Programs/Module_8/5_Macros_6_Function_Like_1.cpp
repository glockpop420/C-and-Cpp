#include <iostream>
using namespace std;

#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
	int a = 18;
	int b = 76;

	cout << "Minimum value between"
		<< a << " and " << b
		<< " is: " << min(a, b);

	return 0;
}

