#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = a; j > i; j--)
    {
      cout << " ";
    }
    for (int j = 0; j < i; j++)
    {
      if(j==0 || j==i-1 || i==a)cout << "* ";
      else cout<<"  ";
      
    }
    cout << endl;
  }
}
