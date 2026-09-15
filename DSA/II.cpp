#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i] - 48;
    }
    
    cout<<sum<<endl;
}
