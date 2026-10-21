#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int A[n];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  int min = A[0];
  for (int i = 0; i < n; i++)
  {
    if (min > A[i])
    {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}
