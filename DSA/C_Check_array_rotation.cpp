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
    int count = 0;
    for (int i = a-1; i >= 0; i--)
    {
        if(arr[i] < arr[i-1]) {
            count = i;
            break;
        }
    }
    cout<<count;
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
