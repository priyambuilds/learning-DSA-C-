#include <iostream>
using namespace std;

long long findFact(int n) {
    for (int i = 0; i <= n; i++)
    {
        if(n%i==0) {
            cout<<i<<" ";
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    findFact(n);
}
