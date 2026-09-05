#include <iostream>
using namespace std;

int main()
{
    string str;
    char a;
    cin>>str>>a;
    int size = str.size();
    int write_index = 0;
    for (int i = 0; i < size; i++)
    {
        if(str[i] !=a) {
            str[write_index] = str[i];
            write_index++;
        }
    }
    str.resize(write_index);
    cout<<str;
    
}
