#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int x;
  cin>>x;
  int A[n];
  for (int i = 0; i < n; i++)
  {
    cin>>A[i];
  }
  for (int i = 0; i < n; i++)
  {
    if(x==A[i]) {
      cout<<"YES";
      return 0;
    }
  }
  cout<<"NO";
}
