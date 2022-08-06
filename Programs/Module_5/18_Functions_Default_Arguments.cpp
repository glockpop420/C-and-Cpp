#include<iostream>  
using namespace std;  
int sum(int x, int y, int z=0, int w=0) // Here there are two values in the default arguments   
{ // Both z and w are initialised to zero   
    return (x + y + z + w); // return sum of all parameter values  
}  
int main()  
{  
    cout << sum(1000, 1000) << endl; // x = 10, y = 15, z = 0, w = 0  
    cout << sum(65, 70, 65) << endl; // x = 10, y = 15, z = 25, w = 0  
    cout << sum(5, 5, 5, 5) << endl; // x = 10, y = 15, z = 25, w = 30  
    return 0;  
}  
