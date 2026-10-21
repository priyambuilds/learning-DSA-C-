#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int b;
  int count = 0;
  for (int i = 0; i < a; i++)
  {
    cin >> b;
    if (18 % b == 0 || b % 45 == 0)
      count++;
  }
  cout << count;
}
