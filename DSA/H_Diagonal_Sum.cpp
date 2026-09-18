#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     int sum = 0;
//     int i = 0;
//     while(i < n) {
//         sum += arr[i][i];
//         i++;
//     }
//     cout<<sum;
// }

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    int i = n-1;
    while(i >= 0) {
        sum += arr[i][i];
        i--;
    }
    cout<<sum;
}