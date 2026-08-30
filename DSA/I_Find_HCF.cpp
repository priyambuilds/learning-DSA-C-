#include <iostream>
using namespace std;

int findHcf(int a, int b) {
    int max = a > b ? a : b;
    int min = a > b ? b : a;
    for (int i = max; i >= min; i--)
    {
        if(a%i==0 && b%i==0)
            return i;
    }
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<findHcf(a, b);
}
