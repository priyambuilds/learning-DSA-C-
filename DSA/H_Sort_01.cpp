#include<iostream>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int arr[n];
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if(arr[i] == 0) {
            c0++;
        } else c1++;
    }
    for (int i = 0; i < c0; i++) {
        arr[i] = 0;
    }
    for (int i = c0 ; i < n; i++) {
        arr[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        cout<<arr[i]<< " ";
    }
    cout << endl;
}

int main () {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
