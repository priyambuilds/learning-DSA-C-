#include <iostream>
using namespace std;

int findDivisors (int a) {
  int count = 0;
  for (int i = 1; i <= a; i++)
  {
    if(a%i==0) count++;
  }
  return count;
}

int main()

{
  long long n, q, k;
  cin >> n>>q>> k;
  long long A[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  long long Q[n];
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    if(i%2!=0)sum +=A[i];
    Q[i] = sum;
  }
  while(q--) {
    long long l,r;
    cin>>l>>r;
    l--;
    r--;
    if (l == 0)
    {
      cout<<Q[r]<<endl;
    }
    else {
      cout<<Q[r] - Q[l-1]<<endl;
    }
  }
}
