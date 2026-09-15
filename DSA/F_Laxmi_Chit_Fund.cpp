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
    int total = 0;
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < a; i++)
    {
        total += arr[i];
        if(max < arr[i]) max = arr[i];
        else if(min > arr[i]) min = arr[i];
    }
    int avg = total/a;
    cout<<total<<" "<<max<<" "<<min<<" "<<avg;
}
