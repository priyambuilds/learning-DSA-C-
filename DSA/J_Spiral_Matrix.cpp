#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int stRow = 0;
    int endRow = n-1;
    int stCol = 0;
    int endCol = m-1;

    while(stRow <= endRow && stCol <= endCol) {
        for (int j = stCol; j <= endCol; j++)
        {
            cout<<arr[stRow][j]<<" ";
        }
        for (int i = stRow+1; i <= endRow; i++)
        {
            cout<<arr[i][endCol]<<" ";
        }
        if(stRow != endRow) {
            for (int j = endCol-1; j >= stCol ; j--)
            {
                cout<<arr[endRow][j]<<" ";
            }
        }
        if(stCol != endCol) {
            for (int i = endRow-1; i >= stRow+1; i--)
            {
                cout<<arr[i][stCol]<<" ";
            }
        }
        
        stRow++;
        endRow--;
        stCol++;
        endCol--;
    }
    
}
