#include <iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int size = str.size();
    bool tenChar = false;
    if(size ==10) tenChar = true;
    bool lower = false;
    bool upper = false;
    bool digit = false;
    bool special = false;
    for (int i = 0; i < size; i++)
    {
        if(str[i] >='a' && str[i] <= 'z') lower = true;
        else if(str[i] >='A' && str[i] <= 'Z') upper = true;
        else if(str[i] >='0' && str[i] <= '9') digit = true;
        else special = true;
    }
    if(tenChar && lower && upper && digit && special) cout<<"Strong"; else cout<<"Weak";
}
