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
  int sum = 0;
  for (int i = 0; i < a; i++)
  {
    sum += A[i]*(a-i)*(i+1);
  }
  cout<<sum;
}