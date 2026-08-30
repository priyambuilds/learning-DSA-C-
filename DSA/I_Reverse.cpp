#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int i = 0;
    int j = a-1;
    int arr[a];
    for (int i = 0; i < a; i++) {
        cin>>arr[i];
    }
    while(i <= j)
    {
        swap(arr[i], arr[j]); i++; j--;
    }
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
