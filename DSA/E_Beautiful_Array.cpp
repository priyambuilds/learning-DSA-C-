#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a];
    bool check = true;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    int b = arr[0];
    for (int i = 0; i < a; i++)
    {
        if(b!=arr[i]) check = false;
    }
    if(check)
        cout << "YES";
    else
        cout << "NO";
}
