#include <iostream>
#include <cmath>
using namespace std;

bool test(int a)
{
  long long sqrt = std::sqrt(a);
  int count = 0;
  bool isPrime = true;
  if (a < 2)
  {
    isPrime = false;
  }
  for (int i = 2; i <= sqrt; i++)
  {
    if (a == 2 || a == 3)
    {
      isPrime = true;
      break;
    }
    if (a % i == 0)
    {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

int main()
{
  int t;
  cin >> t;
  int count = 0;
  for (int i = 1; i <= t; i++)
  {
    bool ans = test(i);
    if(ans) count++;
  }
  cout<<count;
}