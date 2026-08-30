#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arr[a];
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if(b==arr[i]) count++;
    }
    cout<<count;
    
}
