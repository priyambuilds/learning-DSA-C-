#include <iostream>
using namespace std;

void hcf (int a,int b) {
  int min = a>b ? b : a;
  for (int i = 1; i <= min; i++)
  {
    if(i%a==0 && i%b==0) {
      min = i;
    }
  }
  cout<<min;
}

int main()
{
  int a, b;
  cin>>a>>b;
  hcf(a,b);
}
