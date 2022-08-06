#include<iostream>
using namespace std;
class sum 
{
	public:
	int x, y;
	void getdata(int a, int b)
	{
		x=a;
		y=b;
	}
	sum operator+(sum &ob)
		{
			sum c;
			c.x=x+ob.x; // 10+40
			c.y=y+ob.y; // 20+35
			return c;
		}
		void display()
		{
			cout<<"\nSum of X:"<<x;
			cout<<"\nSum of Y:"<<y;
		}
};
int main()
{
	sum ob1, ob2,obj3;
	ob1.getdata(10,20);
	ob2.getdata(40,35);
	obj3=ob1+ob2; // ob1.operator +(ob2)
	obj3.display();
	return 0;
}
