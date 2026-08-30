#include <iostream>
#include<string>
using namespace std;

int countZeros(int n) {
    int count = 0;
    string len = to_string(n);
    for (int i = 0; i < len.length(); i++)
    {
        if(n%10==0) count++;
        n=n/10;
    }
    cout<<count;
    
}

int main()
{
    int a;
    cin>>a;
    countZeros(a);
}
