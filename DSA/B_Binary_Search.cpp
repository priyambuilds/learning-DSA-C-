#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i <a; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int l = 0;
    int r = a-1;
    bool ans = false;
    while (l<=r) {
        int mid = (l+r)/2;
        if (arr[mid]==x) {
            ans = true;
            break;
        }
        else if (arr[mid] > x) {
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }
    if(ans) {
        cout<<"YES";
    } else cout<<"NO";
}