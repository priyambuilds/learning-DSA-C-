#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for (int i = 1; i <=a; i++)
    {
        int num = i%2==0 ? 1 : 0;
        for (int j = 1; j <= i; j++)
        {
            cout<<num%2;
            num++;
        }
        cout<<endl;
    }

}
