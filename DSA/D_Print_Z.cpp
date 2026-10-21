#include <iostream>
using namespace std;

int main()
{
  int n  = 5;
  for (int row = 0; row < n; row++) {
    if( row == 0 | row == n-1) {
      for (int i = 0; i < n; i++) cout<<"*";
    } else {
      for (int col = 0; col < n - row - 1; col++)
      {
        cout<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
  }
}
