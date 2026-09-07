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
    int pass = 1;
    for (int i = a-1; i >= 1; i--)
    {
        bool check = false;
        int shift = 0;
        for (int j = 0; j < i; j++)
        {
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                shift++;
                check = true;
            }
        }
        cout<<"Pass "<<pass<<": ";
        for (int j = 0; j < a; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<", shofts = "<<shift<<endl;
        pass++;
        if(!check) break;
    }
    
}
