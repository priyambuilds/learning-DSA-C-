#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pass = 1;
    for (int i = 1; i < n; i++)
    {
        int shifts = 0;
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp)  {
            arr[j+1] = arr[j];
            j--;
            shifts++;
        }
        arr[j+1] = temp;
        cout<<"Pass "<<pass<<": ";
        for (int j = 0; j < n; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<", ";
        for (int j = 0; j <= i; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<"| ";
        for (int j = i; j < n; j++)
        {
            cout<<arr[j]<<" ";
        }
        
        cout<<", shifts = "<<shifts<<endl;
        pass++;
    }
}
