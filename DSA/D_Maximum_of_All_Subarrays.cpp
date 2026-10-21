#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int A[a];
  for (int i = 0; i < a; i++)
  {
    cin >> A[i];
  }
  for (int l = 0; l < a; l++)
  {
    int mx = A[l];
    for (int r = l; r < a; r++)
    {
      mx = max(mx, A[r]);
      cout << mx << endl;
    }
  }
}
