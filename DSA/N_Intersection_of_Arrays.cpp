#include <iostream>
using namespace std;

void test()
{
  int n;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++)
    cin >> A[i];

  int m;
  cin >> m;
  int B[m];
  bool used[m];
  for (int j = 0; j < m; j++)
  {
    cin >> B[j];
    used[j] = false;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (B[j] == A[i] && !used[j])
      {
        cout << A[i] << " ";
        used[j] = true;
        break;
      }
    }
  }
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    test();
}