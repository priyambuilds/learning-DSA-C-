#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  long long A[a];
  for (int i = 0; i < a; i++)
  {
    cin >> A[i];
  }
  long long sum = 0;
  for (int i = 0; i < a; i++)
  {
    sum += A[i]*(a-i)*(i+1);
  }
  cout<<sum;
}
