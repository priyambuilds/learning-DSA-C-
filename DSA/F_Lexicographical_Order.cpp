#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    if (s1 > s2)
    {
        cout<<"B";
    }
    else if (s2 > s1) {
        cout<<"A";
    } else cout <<"Equal";
}
