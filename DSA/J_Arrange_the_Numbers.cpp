#include <iostream>
using namespace std;

void test () {
    int a;
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        if(i==1 || i%2!=0) cout<<i<<" ";
    }
    for (int i = a; i >0; i--)
    {
        if(i%2==0)cout<<i<<" ";
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
