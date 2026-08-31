#include <iostream>
#include<string>
using namespace std;

int main()
{
    long long a;
    cin>>a;
    string len = to_string(a);
    int count = 0;
    for (int i = 0; i < len.length(); i++)
    {
        if(a%10==0) count++;
        a = a/10;
    }
    cout<<count;
    
}
