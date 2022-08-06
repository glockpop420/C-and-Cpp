#include<iostream>
#include<cstring> //#include<string.h>
using namespace std;
class app
{
	public:
	char str[20];
	public:
	void getstring()
	{
		cout<<"\n Enter String:";
		cin>>str;
	}
	void putstring()
	{
		cout<<str;
	}
	void operator+(app x) //Concatenating String
	{
		strcat(str,x.str);
	}
};
int main()
{
	app str1, str2;
	str1.getstring();
	str2.getstring();
	str1+str2;
	str1.putstring();
	return 0;
}
