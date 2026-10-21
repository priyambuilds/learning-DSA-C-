#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < i; j++)
    {
      if (j == 0 || j == i - 1)
        cout << ">";
      else
        cout << " ";
      cout << " ";
    }
    cout << endl;
  }
  for (int i = a; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout << " ";
    }
    for (int j = i; j > 0; j--)
    {
      if (j == 1 || j == i)
        cout << ">";
      else
        cout << " ";
      cout << " ";
    }
    cout << endl;
  }
}
