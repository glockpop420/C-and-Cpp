#include <iostream>
using namespace std;
// First version of f() template.
template <class X> void f(X a)
{
cout << "Inside f(X a)\n";
}
// Second version of f() template.
template <class X, class Y> void f(X a, Y b)
{
cout << "Inside f(X a, Y b)\n";
}
int main()
{
f("hello"); // calls f(X)
f(10, 20); // calls f(X, Y)
return 0;
}
