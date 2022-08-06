#include <iostream>
using namespace std;
template<class t1>
void sum(t1 a,t1 b,t1 c)
{
cout<<"Template function 1: Sum = "<<a+b+c<<endl;
}
template <class t1,class t2>
void sum(t1 a,t1 b,t2 c)
{
cout<<"Template function 2: Sum = "<<a+b+c<<endl;
}
void sum(int a,int b)
{
cout<<"Normal function: Sum = "<<a+b<<endl;
}
void sum(int a,int b,int c)
{
cout<<" If all the values are integer:"<<a*b*c<<endl;
}
int main()
{
int a,b,c;
float x,y,z;
cout<<"Enter three integer data: ";
cin>>a>>b>>c;
cout<<"Enter three float data: ";
cin>>x>>y>>z;
sum(a,b,c); //default function sum(int,int,int) will be called.
sum(x,y,z); // calls first template function
sum(a,b,z); // calls second template function
sum(x,b,z); // calls second template function
sum(a,b); // calls sum(int,int)
return 0;
}
