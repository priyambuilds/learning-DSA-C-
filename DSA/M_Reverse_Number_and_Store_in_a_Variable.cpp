#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int temp = a;
  int len = 0;
  while (temp > 0)
  {
    temp /= 10;
    len++;
  }
  int rev = 0;
  for (int i = 0; i < len; i++)
  {
    int digit = a % 10;
    a /= 10;
    rev = rev * 10 + digit;
  }
  cout << rev;
}
