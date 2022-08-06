#include <iostream>
using namespace std;
template<class t>
void sum(t a,t b) // defining template function
{
cout<<"Sum="<<a+b<<endl;
}
int main()
{
int a,b;
float x,y;
cout<<"Enter two integer data: ";
cin>>a>>b;
cout<<"Enter two float data: ";
cin>>x>>y;
sum(a,b); // adding two integer type data
sum(x,y); // adding two float type data
return 0;
}
