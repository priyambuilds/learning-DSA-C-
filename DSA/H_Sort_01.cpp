#include <iostream>
using namespace std;

void test()
{
  int n;

  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  int zero = 0;
  int one = 0;
  for (int i = 0; i < n; i++)
  {
    A[i] == 0 ? zero++ : one++;
  }
  for (int i = 0; i < zero; i++)
  {
    cout<<0<<" ";
  }
  for (int i = 0; i < one; i++)
  {
    cout<<1<<" ";
  }
  cout<<endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    test();
  }
}
