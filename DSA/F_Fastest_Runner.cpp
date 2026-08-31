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
    int winner = 0;
    int count = arr[0];
    for (int i = 0; i < a; i++)
    {
        if(arr[i]<count) count = arr[i]; winner = i+1;
    }
    for (int i = 0; i < a; i++)
    {
        if(count == arr[i]) winner = i+1;
    }
    cout<<winner;
    
    
}
