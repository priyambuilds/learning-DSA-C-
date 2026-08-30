#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    
    for (int i = 1; i <=a; i++)
    {
        for (int j = a; j >=i; j--)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            if(i==1 || j==a || j==i|| j == 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout<<endl;
    }
    for (int i = a-1; i >=1; i--)
    {
        for (int j = a; j >=i; j--)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            if(i==1 || j==a || j==i || j == 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout<<endl;
    }

}
