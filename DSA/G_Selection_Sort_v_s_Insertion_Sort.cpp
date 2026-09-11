#include <iostream>
using namespace std;

void test () {
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr1[i] = arr[i];
    }
    
    // Selection sort
    int swapped = 0;
    for (int i = 0; i < n-1; i++)
    {
        int min = arr[i];
        int loc = i;
        for (int j = i+1; j<n; j++)
        {
            if(min > arr[j]) {
                min = arr[j];
                loc = j;
            }
        }
        if (loc != i) {
            swap(arr[i], arr[loc]);
            swapped++;
        }
        
    }

    // Insertion sort
    int shifts = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i-1;
        int temp = arr1[i];
        while (j >= 0 && arr1[j]>temp) {
            arr1[j+1] = arr1[j];
            j--;
            shifts++;
        }
        arr1[j+1] = temp;
    }
    
    if (swapped > shifts) cout << "Insertion Sort";
    else if (swapped < shifts) cout << "Selection Sort";
    else cout << "Tie";
    cout << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        test();
    }
    return 0;
}
