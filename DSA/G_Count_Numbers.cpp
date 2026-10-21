#include <iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  int b;
  int pve = 0;
  int nge = 0;
  int eve = 0;
  int odd = 0;

  for (int i = 0; i < a; i++)
  {
    cin>>b;
    if(b>0) pve++;
    else if (b<0) nge++;
    if(b%2 ==0) eve++;
    else odd++;
  }
  cout<<pve<<endl<<nge<<endl<<eve<<endl<<odd;
}
