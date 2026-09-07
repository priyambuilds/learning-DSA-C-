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
    for (int i = 0; i < a-1; i++)
    {
        int min = arr[i];
        int loc = i;
        for (int j = i+1; j <a ; j++)
        {
            if(min>arr[j]) {
                min = arr[j];
                loc = j;
            }
        }
        swap(arr[i], arr[loc]);
        cout<<"Pass "<<i+1<<": ";
        for (int j = 0; j < a; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<", min_selected = "<<arr[i]<<endl;
    }
    
}
