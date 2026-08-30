#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int calc = 1;
    for (int i = 0; i < b; i++)
    {
        calc *= a;
    }

    cout<<calc;
}
