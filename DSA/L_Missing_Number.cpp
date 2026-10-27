#include <iostream>
using namespace std;

void test()
{
  int a;
  cin >> a;
  int arr[a];
  int ans;
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < a; i++)
  {
    int count = 0;
    for (int j = i; j < a; j++)
    {
      ans = arr[i];
      if (arr[j] == ans)
      {
        count++;
        break;
      }
    }
    if(count==1) {
      ans = arr[i];
      break;
    }
  }
  cout<<ans<<endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    test();
  }
}
