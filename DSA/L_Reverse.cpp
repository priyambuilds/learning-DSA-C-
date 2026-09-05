#include <iostream>
using namespace std;

void check(string& str) {
    int left = 0;
    int right = str.size() - 1;
    while(left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    cout<<str;
}

int main()
{
    string str;
    cin>>str;
    check(str);
}
