#include <iostream>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  char A[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  long long Q[n];
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    if(A[i]=='a' || A[i]=='e' ||A[i]=='i' ||A[i]=='o' ||A[i]=='u') sum += 1;
    else sum+=0;
    Q[i] = sum;
  }
  int q;
  cin>>q;
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
