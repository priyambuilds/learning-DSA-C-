#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long a;
  cin>>a;
  long long sqrt = std::sqrt(a);
  bool isPrime = true;
  if(a<2) isPrime = false;
  for (int i = 2; i <= sqrt; i++)
  {
    if(a==2 || a==3) {
      isPrime =true;
      break;
    }
    if(a%i==0) {
      isPrime = false;
      break;
    }
  }
  isPrime ? cout<<"YES" : cout<< "NO";
}