#include <iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int count = str.size();
    for (int i = 0; i < count; i++)
    {
        if(str[i] >='a' && str[i] <= 'z') str[i] = str[i] - 32;
        else if(str[i] >='A' && str[i] <= 'Z') str[i] = str[i] + 32;
    }
    cout<<str;
}
