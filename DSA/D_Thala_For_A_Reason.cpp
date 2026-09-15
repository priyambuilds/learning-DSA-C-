#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin>>b;
        int ans = 0;
        string len = to_string(b);
        for (int j = 0; j < len.size(); j++)
        {
            ans += b%10;
            b/=10;
        }
        if(ans==7) cout<<"Thala for a reason";
        else cout <<"Blocked for no reason";
        cout<<endl;
    }
    
}
