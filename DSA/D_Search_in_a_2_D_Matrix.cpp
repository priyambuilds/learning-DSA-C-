#include <iostream>
using namespace std;

int main()
{
    int n,m, x;
    cin>>n>>m>>x;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int target = x;
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == x) check = true;
        }
    }
    if(check) cout<<"true"; else cout<<"false";
}

