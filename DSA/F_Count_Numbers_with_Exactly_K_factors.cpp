#include <iostream>
using namespace std;
#include <cmath>
long long findDivisors(long long a)
{
  long long count = 0;
  for (long long i = 1; i <= a / i; i++)
  {
    if (a % i == 0)
    {
      count += (i == a / i) ? 1 : 2;
    }
  }
  return count;
}
int main()
{
  long long n, q, k;
  cin >> n >> q >> k;
  long long A[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  long long Q[n];
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (findDivisors(A[i]) == k)
    {
      sum++;
    }
    Q[i] = sum;
  }
  while (q--)
  {
    long long l, r;
    cin >> l >> r;
    l--;
    r--;
    if (l == 0)
    {
      cout << Q[r] << endl;
    }
    else
    {
      cout << Q[r] - Q[l - 1] << endl;
    }
  }
}
