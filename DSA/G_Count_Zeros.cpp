#include <iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  int count = 0;
  if(a==0) {
    count++;
  }
  while(a) {
    if(a%10==0) count++;
    a/=10;
  }
  cout<<count;
}
