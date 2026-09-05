#include <iostream>
using namespace std;

int main()
{
    string str;
    char a,b;
    cin>>str>>a>>b;
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        if(str[i]==a) str[i]=b;
    }
    cout<<str;
    
}
