#include <iostream>
using namespace std;

int digitSum (int a) {;
  int ans = 0;
  while(a) {
    ans += a%10;
    a/=10;
  }
  return ans;
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
    if(digitSum(A[i]) == k) {
      sum++;
    }
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
