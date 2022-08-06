#include <iostream>
#include<string.h>
using namespace std;

class Student 
{
   private:
   		int rollNo;
   		char name[10];
   		int marks;
   public:
   		static int objectCount; //static return_type name_of_static_data_member
   Student() // default constructor
   {
      objectCount++;
   }

   void getdata() 
   {
      cout << "Enter roll number: "<<endl;
      cin >> rollNo;
      cout << "Enter name: "<<endl;
      cin >> name;
      cout << "Enter marks: "<<endl;
      cin >> marks;
   }

   void putdata() 
   {
      cout<<"Roll Number = "<< rollNo <<endl;
      cout<<"Name = "<< name <<endl;
      cout<<"Marks = "<< marks <<endl;
      cout<<endl;
   }
};
int Student::objectCount = 0; // this get executed i.e the stati data member get intialized before the object creation
int main(void) 
{
   Student s1;
   s1.getdata();
   s1.putdata();
   
   Student s2;
   s2.getdata();
   s2.putdata();

   Student s3;
   s3.getdata();
   s3.putdata();

   cout << "Total objects created = " << Student::objectCount << endl;
   return 0;
}
