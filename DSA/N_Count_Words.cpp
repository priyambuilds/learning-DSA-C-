#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int size = str.size();
    int space = 0;
    for (int i = 0; i < size; i++)
    {
        if(str[i]==' ') space++;
    }
    cout<<space+1;
    
}
