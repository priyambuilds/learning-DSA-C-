
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
