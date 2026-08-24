
// int main() {
    //     int n;
    //     cin >> n;
    //     for (int i = n; i > 0; i--) {
        //         cout << i << " ";
        //     }
        // }
        
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cin >> n;
//     for (int i = 2; i <= n; i++) {
//         if(i%2==0) {
//             cout << i << " ";
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main () {
//     for (char i = 'A'; i <= 'Z'; i++)
//     {
//         cout<<i<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// #include <vector>

// int main () {
//     int a;
//     cin >> a;
//     vector<int> nums(static_cast<size_t>(a));
//     int pos = 0, neg = 0, eve = 0, odd = 0;
//     for (int i = 0; i < a; i++)
//     {
//         cin >> nums[static_cast<size_t>(i)];
//     }
//     for(int i : nums) {
//         if (i > 0)  pos += 1;
//         if (i < 0) neg += 1;
//         if (i % 2 == 0) eve += 1;
//         else odd += 1;
//     }
//     cout << pos << endl
//          << neg << endl
//          << eve << endl
//          << odd;
// }

// int main () {
    //     int a;
    //     cin >> a;
    //     int pos = 0, neg = 0, eve = 0, odd = 0;
    //     for (int i = 1; i <= a; i++) {
        //         int b;
        //         cin >> b;
        //         if (b > 0)  pos++;
        //         if (b < 0) neg++;
        //         if (b % 2 == 0) eve++;
        //         else odd++;
        
        //     }
        //         cout << pos << endl
        //          << neg << endl
        //          << eve << endl
        //          << odd;
        // }
        
// #include<iostream>
// using namespace std;
// int main () {
//     int a;
//     cin >> a;
//     int sum = 0;
//     for (int i = 1; i <= a; i++)
//     {
//         sum += i;
//     }
//     cout << sum;
// }


// int main () {
    //     long long a;
    //     cin >> a;
    //     long long sum = a*(a+1)/2;
    //     cout << sum;
    // }


#include<iostream>
using namespace std;
// int main () {
//     int n;
//     cin >> n;
//     long long sum = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         sum *= i;
//     }
//     cout << sum;
// }

// int main () {
//     long long x, y;
//     cin >> x >> y;
//     long long result = 1;
//     for (int i = 1; i <= y; i++)
//     {
//         result *= x;
//     }
//     cout << result;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     long long n;
//     cin >> n;
//     if (n == 0) {
//         cout << 0;
//         return 0;
//     }
//     while(n>0)
//     {
//         cout << n % 10;
//         n = n / 10;
//     }
// }

// #include<iostream>
// using namespace std;

// int main (){
//     long long n;
//     cin>>n;
//     int sum = 0;
//     while (n > 0)
//     {
//         sum += n % 10;
//         n = n / 10;
//     }
//     cout << sum;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     long long n;
//     cin >> n;
//     long long rev = 0;
//     while(n>0)
//     {
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }
//     cout << rev;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     long long n;
//     cin >> n;
//     long long copy = n;
//     long long rev = 0;
//     while(n>0)
//     {
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }
//     copy == rev ? cout << "YES" : cout << "NO";
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         cout << "**" << '\n';
//     }
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main () {
//     size_t l, b;
//     cin >> l >> b;
//     string lr(b, '*');
//     for (size_t i = 1; i <= l; i++)
//     {
//         cout << lr << endl;
//     }
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main () {
//     size_t n;
//     cin >> n;
//     string sq(n, '*');
//     string hollow_m(n-2, ' ');
//     if(n==1) {
//         cout << "*" <<endl;
//         return 0;
//     }
//     cout << sq<< endl;
//     for (size_t i = 2; i < n; i++) {
//         cout << "*" << hollow_m << "*"<<endl;
//     }
//     cout << sq;
// }

// #include<iostream>
// #include<iostream>
// #include<string>
// using namespace std;

// int main () {
//     size_t n;
//     cin >> n;
//     for (size_t i = 1; i <=n; i++) {
//         for (size_t j = 1; i>=j; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// #include<string>
// using namespace std;

// int main () {
//     size_t n, m;
//     cin >> n>>m;
//     string sq(m, '*');
//     string hollow_m(m-2, ' ');
//     if(n==1) {
//         cout << "*" <<endl;
//         return 0;
//     }
//     cout << sq<< endl;
//     for (size_t i = 2; i < n; i++) {
//         cout << "*" << hollow_m << "*"<<endl;
//     }
//     cout << sq;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main () {
//     size_t n;
//     cin >> n;
//     for (size_t i = n; i >= 1; i--) {
//         string tri(i, '*');
//         cout << tri<<endl;
//     }
// }


//  #include<iostream>
// #include<string>
// using namespace std;
 
// int main () {
//     size_t n;
//     cin >> n;
//     for (size_t i = 1; i <=n; i++) {
//         for (size_t j = 1; i>=j; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main () {
//     int n, m;
//     cin>>n>>m;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main () {
//     size_t n;
//     cin >> n;
//     for (size_t i = 1; i <= n; i++) {
//         size_t one = i - 1;
//         size_t zero = i;
//         for (size_t j = 1; j <= i; j++)
//         {
//             cout << i - one << i - zero;
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main () {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 65; j<=65+m; ++j) {
//             cout << static_cast<char>(j) << " ";
//         }
//     cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int start;
//         i % 2 == 1 ? start = 0 : start = 1;
//         cout << start;
//         for (int j = 2; j <= i; j++)
//         {
//             start == 0 ? start = 1 : start = 0;
//             cout << start;
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n-1; i >=1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}