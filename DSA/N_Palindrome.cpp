#include <iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  int temp = a;
  int rev = 0;
  while(temp>0) {
    int digit = temp %10;
    temp /=10;
    rev = rev * 10 + digit;
  }
  rev==a ? cout<<"YES" : cout<<"NO";
}
