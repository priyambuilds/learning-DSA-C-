#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    string len = to_string(n);
    for (int i = 0; i < len.length(); i++)
    {
        sum+=n%10;
        n=n/10;
    }
    cout<<sum;
}
