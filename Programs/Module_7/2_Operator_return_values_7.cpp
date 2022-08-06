#include<iostream>
using namespace std;
class complex {
public:
int a, b,x,y;
void getvalue() {
cout << "Enter the Two Numbers:";
cin >> a>>b;
}
complex operator ++()
{
complex c;
c.x=++a;
c.y=++b;
return c;

}
void display() {
cout << x << "+\t" << y << "i" << endl;
}
};
int main() {
complex obj,obj1;
obj.getvalue();
obj1= ++obj;
cout << "prefix Increment return Complex \n";
obj1.display();
return(0);
}
