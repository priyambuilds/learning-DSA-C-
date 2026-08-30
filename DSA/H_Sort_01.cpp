#include <iostream>
using namespace std;

int test() {
    int b;
    cin>>b;
    int arr[b];
    for (int i = 0; i < b; i++)
    {
        cin>>arr[i];
    }
    int zero = 0;
    int one = 0;
    for (int i = 0; i < b; i++)
    {
        if(arr[i] ==0) zero++; else one++;
    }
    for (int i = 0; i < zero; i++)
    {
        cout<<0<<" ";
    }
    for (int i = 0; i < one; i++)
    {
        cout<<1<<" ";
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
