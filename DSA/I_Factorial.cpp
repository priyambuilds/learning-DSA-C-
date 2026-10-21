#include <iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  int fac = 1;
  for (int i = 1; i <= a; i++)
  {
    fac *= i;
  }
  cout<<fac;
}
