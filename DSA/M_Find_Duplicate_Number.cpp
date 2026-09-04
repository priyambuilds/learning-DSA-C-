#include <iostream>
using namespace std;

int test () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans;
    for (int i = 0; i < n; i++)
    {
        int target = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(target ==arr[j]) count++;
        }
        if(count==2) {
            ans=arr[i];
            break;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        test();
    }
    
}
