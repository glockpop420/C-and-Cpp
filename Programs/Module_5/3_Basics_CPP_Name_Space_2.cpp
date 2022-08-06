#include <iostream>
using namespace std;

namespace A
{
  int x = 5;
  void printX()
  {
    // function statements goes here
    cout<<x<<endl;
  }
}

using namespace A; //instead of using scope resolution -> using directive
  
int main()
{
   cout<<x<<endl;
   //A::printX();
   printX();
   return 0;
}
