#include<iostream>
#include<string>
using namespace std;

int main () {
    long long a;
    cin>>a;
    string str = to_string(a);
    for (int i = 0; i < str.length(); i++)
    {
        cout<<a%10;
        a = a/10;
    }
}