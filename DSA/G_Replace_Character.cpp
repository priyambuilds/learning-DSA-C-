#include <iostream>
using namespace std;

int main()
{
    string str;
    char a,b;
    cin>>str>>a>>b;
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        if(str[i]==a) str[i] = b;
    }
    cout<<str;
    
}
