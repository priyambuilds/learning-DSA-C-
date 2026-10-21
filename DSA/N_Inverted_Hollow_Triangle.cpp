#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for (int i = a; i >= 1; i--)
  {
    for (int j = i; j < a; j++)
    {
      cout<<" ";
    }
    for (int j = i; j > 0; j--)
    {
      if(i==a||j==i||j==1) cout<<"* ";
      else cout<<"  ";
    }
    cout<<endl;
  }
}