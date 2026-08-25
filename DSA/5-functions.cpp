#include<iostream>
using namespace std;

unsigned long long findFact(int n) {
    if(n<0) return 0;
    unsigned long long sum = 1;
    for (unsigned int i = 2; i <= static_cast<unsigned int>(n); i++) {
        sum *= i;
    }
    return sum;
}

int main () {
    int n, r;
    cin >> n>>r;
    cout<< findFact(n)/(findFact(r)*findFact(n-r));
}

#include<iostream>
using namespace std;
#include <cmath>

int getPrime(int n) {
    for (int j = 1; j <= n; j++)
    {
        for (int i = 2; i<=sqrt(j); i++)
        {
            if (j%i == 0)
                return false;
        }
    }
    return true;
}

int main () {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (getPrime(i))
        {
            cout<< i << " ";
        }
    }
}

#include<iostream>
using namespace std;

int printSq(int n, char ch) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}

int main () {
    int n;
    cin>>n;
    char ch;
    cin>>ch;
    printSq(n, ch);
}

#include<iostream>
using namespace std;

int findFact(int n) {
    for (int i = n; i>= 1; i--) {
        if(n%i ==0)
            cout << i<<" ";
    }
    return 0;
}

int main () {
    int n;
    cin >> n;
    findFact(n);
}

#include<iostream>
#include <cmath>
using namespace std;

int isPrime(int n) {
    if(n<=1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

int main () {
    int n;
    cin>>n;

    for (int i = 2; i <= n; i++)
    {if(isPrime(i)) {
        cout<<i<< " ";
    }
}}

#include<iostream>
using namespace std;

int countZero(long long n) {
    int count = 0;
    int a = 0;
    while(n>a) {
        if (n % 10 == 0)
        count++;
        n = n/10;
        a++;
    }
    cout<<count;
    return 0;
}

int main () {
    long long n;
    cin >> n;
    countZero(n);
}

#include<iostream>
using namespace std;

int hcf(int a, int b) {
    int lower = a > b ? b : a;
    for (int i = lower; i >= 1; i--) {
        if(a%i == 0 && b%i==0) {
            return i;
        }
    }
    return 1;
}

int main () {
    int a, b;
    cin>>a>>b;
    cout<<hcf(a, b);
}
