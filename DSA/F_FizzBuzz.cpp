#include <iostream>
using namespace std;

void test (int a) {
  if(a%3==0 && a%5 !=0) cout<<"Fizz";
  else if(a%5==0 && a%3!=0) cout<<"Buzz";
  else if(a%5==0 && a%3 ==0) cout<<"FizzBuzz";
  else cout<< a;
  cout<<endl;
}

int main()
{
  int a;
  cin>>a;
  for (int i = 1; i <= a; i++)
  {
      test(i);
  }
}
