#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a>>b;
    int arr1[a];
    int arr2[b];
    int arr3[a+b];
    for (int i = 0; i < a; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin>>arr2[i];
    }
    int i = 0, j = 0, k=0;
    while(i<a && j< b) {
        if(arr1[i] <= arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<a) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<b) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    for (int x = 0; x < k; x++)
    {
        cout<<arr3[x]<<" ";
    }
}
