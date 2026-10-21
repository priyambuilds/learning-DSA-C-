#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long a;
  cin >> a;
  long long sqrt = std::sqrt(a);

  int count = a;
  for (int i = 1; i <= sqrt; i++)
  {
    if (a % i == 0)
    {
      long long f1 = i;
      long long f2 = a / i;

      cout << f1 << " ";
    }
  }

  for (int i = sqrt; i >= 1; i--)
  {
    if (a % i == 0)
    {
      long long f1 = i;
      long long f2 = a / i;

      if (f1 != f2)
      {
        cout << f2 << " ";
      }
    }
  }
}

// O(sqrt(N))

// sorting an array of size n takes n * log n

// O(sqrt(N) * log(sqrt(N)))