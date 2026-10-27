#include <iostream>
using namespace std;

void findZero (int a) {
  int count = 0;
  if(a==0) count++;
  while(a) {
    int ans = a%10;
    if(ans==0) count++;
    a/=10;
  }
  cout<<count;
}

int main()
{
  int a;
  cin>>a;
  findZero(a);
}
