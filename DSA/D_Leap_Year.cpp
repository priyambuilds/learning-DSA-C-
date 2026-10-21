#include <iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  (a%100==0 && a%400==0) || a%100 != 0 && a%4 ==0 ? cout<<"Yes" : cout<<"No";
}