#include <iostream>
using namespace std;

void test () {
    int a;
    cin>>a;
    int arr[a];
    int ans;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        int unique = arr[i];
        int count = 0;
        for (int j = 0;j <a; j++)
        {
            if(unique==arr[j]) count++;
        }
        if(count==1) {
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
