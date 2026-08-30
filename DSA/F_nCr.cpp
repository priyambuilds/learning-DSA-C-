#include <iostream>
using namespace std;

unsigned long long findFact(int n) {
    if(n<0) return 0;
    unsigned long long sum = 1;
    for (unsigned int i = 2; i <= static_cast<unsigned int>(n); i++) {
        sum *= i;
    }
    return sum;
}

int main()
{
    int a, b;
    cin>>a>>b;
    
    cout<<findFact(a)/((findFact(b))*(findFact(a-b)));
}
