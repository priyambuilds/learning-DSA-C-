#include <iostream>
using namespace std;

void test()
{
  int a;
  cin>>a;
  int A[a];
  for (int i = 0; i < a; i++)
  {
    cin>>A[i];
  }
  int x;
  cin>>x;
  int count = 0;
  for (int i = 0; i < a; i++)
  {
    for (int j = i+1; j < a; j++)
    {
      for (int k = j+1; k < a; k++)
      {
        if(A[i]+A[j]+A[k]==x) count++;
      }
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