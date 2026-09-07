#include <iostream>
using namespace std;

// int main()
// {
//     string a, b;
//     cin>>a>>b;
//     int smaller = a.size() > b.size() ? b.size() : a.size();
//     bool ans = false;
//     if(a==b) {
//         cout<<"Equal";
//         return 0;
//     }
//     for (int i = 0; i < smaller; i++)
//     {
//         if(a[i] < b[i]) ans = true;   
//     }
    
//     if(ans) {
//         cout<<"A";
//     }
//     else {
//         cout<<"B";
//     }
// }


int main () {string s1, s2;
    cin>>s1>>s2;
    if (s1 > s2)
    {
        cout<<"B";
    }
    else if (s2 > s1) {
        cout<<"A";
    } else cout <<"Equal";
}