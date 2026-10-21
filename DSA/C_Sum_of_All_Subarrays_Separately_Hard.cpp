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
    int sum = 0;
    for (int r = l; r < a; r++)
    {
      sum += A[r];
      cout<<sum;
      cout<<endl;
    }
  } 
}