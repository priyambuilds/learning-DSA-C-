#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long a, b;
  cin >> a >> b;
  long long count = 0;
  long long sqrt = std::sqrt(a);
  bool isfactor = false;
  for (int i = 1; i <= sqrt; i++)
  {
    if (a % i == 0)
    {
      count++;
      if(count==b) {
        cout << i;
        return 0;
      }
    }
  }
  for (int i = sqrt; i >=1; i--)
  {
    if (a % i == 0 && i!=a/i)
    {
      count++;
      if(count==b) {
        cout << a/i;
        return 0;
      }
    }
  }
  cout<<-1;
}