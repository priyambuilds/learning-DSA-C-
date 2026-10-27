#include <iostream>
using namespace std;

void test () {
  int n;
  cin>>n;
  int A[n];
  for (int i = 0; i < n; i++)
  {
    cin>>A[i];
  }
  for (int i = 0; i+1 < n; i+=2)
  {
    swap(A[i], A[i+1]);
  }
  for (int i = 0; i <n; i++)
  {
    cout<<A[i]<<" ";
  }
  cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        test();
    }
}
