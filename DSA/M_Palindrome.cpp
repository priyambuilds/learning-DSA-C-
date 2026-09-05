#include <iostream>
using namespace std;

int check(string str) {
    int left = 0;
    int right = str.size() - 1;
    while(left < right) {
        if(str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string str;
    cin>>str;
    if(check(str)) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
