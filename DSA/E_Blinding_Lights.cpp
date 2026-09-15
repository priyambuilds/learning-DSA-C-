#include <iostream>
using namespace std;

int main()
{
    int H, W;
    cin>>H>>W;
    int space = (W-1)/2;
    for (int i = 1; i <= space; i++)
    {
            cout<<" ";
    }
    cout<<"*";
    cout<<endl;
    
    for (int i = 1; i <= H+2; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if(i==1 || i==H+2) cout<<"*";
            else if(j == 1 || j==W) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
        
    }
    
}
