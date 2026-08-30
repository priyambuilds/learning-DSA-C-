#include <iostream>
using namespace std;

void test () {
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < a; i+=2)
    {
        swap(arr[i], arr[i-1]);
    }
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
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
