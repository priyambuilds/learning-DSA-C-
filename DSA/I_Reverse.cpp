#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int A[a];
  for (int i = 0; i < a; i++)
  {
    cin >> A[i];
  }
  int i = 0;
  int j = a-1 ;

  while (i<j) {
    
    swap(A[i], A[j]);
    i++;
    j--;
  }
  for (int i = 0; i < a; i++)
  {
    cout<<A[i]<<" ";
  }
  cout<<endl;
}
