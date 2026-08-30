#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    int pos = 0;
    int neg = 0;
    int eve = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0) neg++;
        if(arr[i]>0) pos++;
        arr[i]%2==0?eve++:odd++;
    }
    cout << pos << endl
         << neg << endl
         << eve << endl
         << odd;
    
    
}