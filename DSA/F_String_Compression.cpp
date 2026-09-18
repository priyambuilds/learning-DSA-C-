#include <iostream>
using namespace std;

void test() {
    string a;
    cin>>a;
    int n = a.size();
    int i = 0;
    while(i < n) {
        int count = 0;
        int j = i;
        while(a[j]==a[i]) {
            j++;
            count ++;
        }
        if(count == 1) {
            cout<<a[i];
        } else {
            cout<<a[i]<<count;
        }
        i = j;
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
