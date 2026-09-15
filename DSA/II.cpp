#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    string arr1[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr1[i];
    }
    int b;
    cin>>b;
    string arr2[b];
    for (int i = 0; i < b; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < a; i++)
    {
        string ans = arr1[i];
        bool check = false;
        for (int j = 0; j < b; j++)
        {
            if(ans == arr2[j]) check = true;
        }
        if(!check) cout<<arr1[i]<<endl;
    }
}