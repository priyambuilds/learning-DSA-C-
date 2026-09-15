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
    int rotation;
    cin>>rotation;
    for (int i = 0 + rotation; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    for (int i = 0; i < rotation; i++)
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
    return 0;
}
