#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long a;
  cin>>a;
  long long sqrt = std::sqrt(a);
  long long count = 0;
  for (int i = 1; i <= sqrt; i++)
  {
    if(a%i==0) {
      if(i==a/i) count++;
      else count+=2;
    }
  }
  cout<<count;
}