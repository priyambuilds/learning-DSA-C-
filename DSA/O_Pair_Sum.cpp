#include <iostream>
#include <algorithm>
using namespace std;

void test()
{
  int a;
  cin >> a;
  int A[a];
  for (int i = 0; i < a; i++)
  {
    cin >> A[i];
  }
  sort(A, A + a);
  int x;
  cin >> x;
  long long count = 0;
  int l = 0;
  int r = a-1;
  while(l<r) {
    int sum = A[l]+A[r];
    if(sum <x) l++;
    else if   (sum >x) r--;
    else {
      if(A[l]==A[r]) {
        long long k = r-l+1;
        count += k*(k-1)/2;
        break;
      }

      // count copies of the left value
      int lv = A[l];
      int cl = 0;
      while(lv ==A[l]) {
        cl ++;
        l++;
      }

      // count copies of the right value
      int rv = A[r];
      int cr = 0;
      while(A[r]==rv) {
        cr++;
        r--;
      }
      count+=cl*cr;
    }
  }
  cout<<count<<endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    test();
}
