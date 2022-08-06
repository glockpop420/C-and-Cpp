#include <iostream>
using namespace std;

namespace A
{
  int x = 5;
  void printX()
  {
    // function statements goes here
    cout<<x<<endl;
    //std::cout<<x<<std::endl;
  }
}

namespace B
{
  int x = 10;
  void printX()
  {
    // function statementsgoes here
    cout<<x<<endl;
    //std::cout<<x<<std::endl;
  }
}

int main()
{
   A::printX(); //scope resolution operator ::
   B::printX();
   //printX();
   return 0;
}
