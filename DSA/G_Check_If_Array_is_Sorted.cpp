#include <iostream>
using namespace std;

int sort(int a, int arr[]) {
    for (int i = 1; i < a; i++)
    {
        if(arr[i-1] > arr[i]) return false;
    }
    return true;
}

int main()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    if(sort(a, arr))
        cout << "YES";
     else
        cout << "NO";
}
