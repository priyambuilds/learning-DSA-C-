#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  int min = arr[0];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int index = 0;
  for (int i =0; i < n; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
      index = i+1;
    }
  }
  cout << min << " " << index;
}
