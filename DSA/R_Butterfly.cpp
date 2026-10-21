#include <iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  for (int i = 0; i <= a; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout<<"*";
    }
    for (int j = a-1; j >= i; j--)
    {
      cout<<"  ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  for (int i = a-1; i >= 1; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout<<"*";
    }
    for (int j = a-1; j >= i; j--)
    {
      cout<<"  ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}
