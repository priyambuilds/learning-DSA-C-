#include <iostream>
using namespace std;

int printPrime(int n) {

    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int a;
    cin>>a;
    for (int i = 2; i <= a; i++)
    {
        if(printPrime(i)) cout<<i<<" ";
    }
    
}
