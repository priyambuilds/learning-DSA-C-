#include <iostream>
using namespace std;

int search(int a, int b, int arr[]) {
    for (int i = 0; i < a; i++)
        {
            if(b==arr[i]) return true;
        }
    return false;
}

int main()
{
    int a, b;
    cin>>a>> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    if(search(a, b, arr))
        cout << "YES";
    else
        cout << "NO";
}
