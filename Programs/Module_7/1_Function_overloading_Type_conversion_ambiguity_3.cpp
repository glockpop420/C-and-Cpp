#include<iostream>  
using namespace std;  
void fun(int);  
void fun(char);  
void fun(int i)  
{  
   cout << "Value of i is : " <<i<< std::endl;  
}  
void fun(char j)  
{  
    cout << "Value of j is : " <<j<< std::endl;  
}  
int main()  
{  
    fun(12);  
    fun(1.2);  
    return 0;  
}  
