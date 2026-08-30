#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rev = n%10;
    n = n / 10;
    string len = to_string(n);
    for (int i = 0; i < len.length(); i++)
    {
        rev = rev*10+n%10;
        n = n/10;
    }
    cout<<rev;
}
