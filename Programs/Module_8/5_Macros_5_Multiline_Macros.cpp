#include <iostream>
using namespace std;

#define ELE 1, \
			2, \
			3

int main()
{
	int arr[] = { ELE };
	printf("Elements of Array are:\n");

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}

