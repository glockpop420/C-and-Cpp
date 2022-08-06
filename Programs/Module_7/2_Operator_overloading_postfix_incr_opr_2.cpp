#include<iostream>
using namespace std;
int main()
{
int a=10,b=20,x,y;
x=a++;
y=b++;
cout<<x<<"\t"<<y<<endl;
cout<<a<<"\t"<<b;
return 0;
}
