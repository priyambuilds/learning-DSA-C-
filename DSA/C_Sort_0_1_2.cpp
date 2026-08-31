#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    int two = 0;
    int zero = 0;
    int one = 0;
    for (int i = 0; i < a; i++)
    {
        if(arr[i]==2) two++;
        if(arr[i]==0) zero++;
        if(arr[i]==1) one++;
    }
    for (int i = 0; i < two; i++)
    {
        cout<<2<<" ";
    }
    for (int i = 0; i < one; i++)
    {
        cout<<1<<" ";
    }
    for (int i = 0; i <zero; i++)
    {
        cout<<0<<" ";
    }
    
    
}
