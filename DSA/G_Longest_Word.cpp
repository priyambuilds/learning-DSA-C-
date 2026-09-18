#include <iostream>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    int n = a.size();
    int i = 0;
    int ans = 0;
    while(i < n) {
        int largest = 0;
        if(a[i] == ' ') {
            i++;
            continue;
        }
        int j = i;
        while(j < n && a[j]!= ' ') {
            j++;
            largest++;
        }
        if(largest > ans) ans = largest;
        i = j;
    }
    cout<<ans;
    
}
