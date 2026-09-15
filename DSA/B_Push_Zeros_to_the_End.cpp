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
    int len = a;
    for (int i = 0; i < a; i++)
    {
        if(arr[i] != 0) {
            cout<<arr[i]<<" ";
            len--;
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout<<0<<" ";
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
    return 0;
}
