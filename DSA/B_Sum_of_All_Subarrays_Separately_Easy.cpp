#include <iostream>
using namespace std;



int main()
{
  int a;
  cin >> a;
  int A[a];
  for (int i = 0; i < a; i++)
  {
    cin >> A[i];
  }
  for (int l = 0; l < a; l++)
  {
    for (int r = l; r < a; r++)
    {
      int sum = 0;
      for (int k = l; k <= r; k++)
      {
        sum+= A[k];
      }
      cout<<sum;
      cout<<endl;
    }
    
  }
  
}