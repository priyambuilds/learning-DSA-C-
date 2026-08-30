#include <iostream>
using namespace std;

int checkPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int a;
    cin>>a;
    if(checkPrime(a)) {
        cout<<"Prime";
    } else cout<<"Not Prime";
}
