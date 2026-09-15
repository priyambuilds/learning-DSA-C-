#include <iostream>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') {
            cout<<a[i]<<a[i];
        }
        else cout<<a[i];
    }
    
}
