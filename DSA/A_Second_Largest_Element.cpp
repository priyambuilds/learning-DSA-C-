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
    int largest = -1;
    int largest2 = -1;
    for (int i = 0; i < a; i++)
    {
        if(largest < arr[i]) largest = arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if(largest2 < arr[i] && arr[i] < largest) largest2 = arr[i];
    }
    
    cout<<largest2;
}
