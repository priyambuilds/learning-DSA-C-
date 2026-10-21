#include <iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = a; j > i; j--)
    {
      cout<<" ";
    }
    for (int j = 1; j <= i; j++)
    {
      if(j==1||j==i)cout<<"* ";
      else cout<<"  ";
      
    }
    cout<<endl;
  }
  for (int i = a; i > 1; i--)
  {
    for (int j = 1; j < i; j++)
    {
      cout<<" ";
    }
    for (int j = i; j > 1; j--)
    {
      if(j==2||j==i)cout<<"* ";
      else cout<<"  ";
    }
    cout<<endl;
  }
}
