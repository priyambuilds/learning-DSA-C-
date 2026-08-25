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

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int i = n-1; i >=1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main () {
//         int n;
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//         {
//                 for (int j = 1; j <= n; j++) {
//                         if(i == 1 || j ==1 || i ==n || j==n) {
//                                 cout << "*";
//                             }
//                             else {
//                                     cout << " ";
//                                 }
//                             }
//                             cout << endl;
//                         }
//                     }
                    
                    
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             if (i == 1 || j == 1 || j==i)
//             {
//                 cout << "* ";
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
        
//     }
//     for (int i = n - 1; i>=1 ; i--) {
//         for (int j = 1; j <= i; j++) {
//             if (i == 1 || j == 1 || j==i)
//             {
//                 cout << "* ";
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     }

// #include<iostream>
// using namespace std;

// int main () {
//     size_t n;
//     cin>>n;
//     for (size_t i = 1; i <= n; i++)
//     {
//         cout << string(n - i, ' ');
//         for (size_t j = 1; j <= i; j++)
//         {
//             cout << "*";
//             if(j<i) {
//                 cout<<" ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     size_t n;
//     cin>>n;
//     for (size_t i = 1; i <= n; i++)
//     {
//         cout << string(n - i, ' ');
//         for (size_t j = 1; j <= i; j++)
//         {
//             if(j==1 || j==i || i==n) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     size_t n;
//     cin>>n;
//     for (size_t i = n; i >=1; i--)
//     {
//         cout << string(n - i, ' ');
//         for (size_t j = 1; j <= i; j++)
//         {
//             if(j==1 || j==i || i==n) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     size_t n;
//     cin>>n;
//     for (size_t i = 1; i <= n; i++)
//     {
//         cout << string(n - i, ' ');
//         for (size_t j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (size_t i = n-1; i >= 1; i--)
//     {
//         cout << string(n - i, ' ');
//         for (size_t j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     size_t n;
//     cin>>n;
//     for (size_t i = 1; i <= n; i++)
//     {
//         cout << string(n - i, ' ');
//         for (size_t j = 1; j <= i; j++)
//         {
//             if (j==1 || j==i) {
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     for (size_t i = n-1; i >= 1; i--)
//     {
//         cout << string(n - i, ' ');
//         for (size_t j = 1; j <= i; j++)
//         {
//             if (j == 1 || j==i) {
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         cout << string(i, '*') << string(n*2 - i * 2, ' ') << string(i, '*') << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     size_t n;
//     cin >> n;
//     for (size_t i = 1; i <= n; i++) {
//         cout<<string(i, '*')<<string(n*2-i*2, ' ')<<string(i, '*')<<endl;
//     }
//     for (size_t i = n-1; i >= 1; i--) {
//         cout<<string(i, '*')<<string(n*2-i*2, ' ')<<string(i, '*')<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     size_t n;
//     cin >> n;
//     for (size_t i = n; i >=1; i--) {
//         cout << string(i, '*') << string(n*2-i*2+1, ' ')<<string(i, '*')<<endl;
//     }
//     for (size_t i = 2; i <= n; i++) {
//         cout << string(i, '*') << string(n*2-i*2+1, ' ')<<string(i, '*')<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     char c;
//     cin >> c;
//     c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ? cout<<"YES" : cout<<"NO";
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     n = n /10;
//     cout << n % 10;
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     if((n%4==0 && n%100 != 0) || (n%400 == 0)) {
//         cout<<"Yes";
//     }
//     else {
//         cout<<"No";
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     cout << n;
//     for (int i = 1; i <= n; i++) {
//         cin >> i;
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     int sum = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         sum *= i;
//     }
//     cout<<sum;
// }

// #include<iostream>
// using namespace std;

// unsigned long long findFact(int n) {
//     if(n<0) return 0;
//     unsigned long long sum = 1;
//     for (unsigned int i = 2; i <= static_cast<unsigned int>(n); i++) {
//         sum *= i;
//     }
//     return sum;
// }

// int main () {
//     int n, r;
//     cin >> n>>r;
//     cout<< findFact(n)/(findFact(r)*findFact(n-r));
// }

// #include<iostream>
// using namespace std;
// #include <cmath>

// int getPrime(int n) {
//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = 2; i<=sqrt(j); i++)
//         {
//             if (j%i == 0)
//                 return false;
//         }
//     }
//     return true;
// }

// int main () {
//     int n;
//     cin >> n;
//     for (int i = 2; i <= n; i++) {
//         if (getPrime(i))
//         {
//             cout<< i << " ";
//         }
//     }
// }

// #include<iostream>
// using namespace std;

// int printSq(int n, char ch) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main () {
//     int n;
//     cin>>n;
//     char ch;
//     cin>>ch;
//     printSq(n, ch);
// }

// #include<iostream>
// using namespace std;

// int findFact(int n) {
//     for (int i = n; i>= 1; i--) {
//         if(n%i ==0)
//             cout << i<<" ";
//     }
//     return 0;
// }

// int main () {
//     int n;
//     cin >> n;
//     findFact(n);
// }

// #include<iostream>
// #include <cmath>
// using namespace std;

// int isPrime(int n) {
//     if(n<=1) return false;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if(n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main () {
//     int n;
//     cin>>n;

//     for (int i = 2; i <= n; i++)
//     {if(isPrime(i)) {
//         cout<<i<< " ";
//     }
// }}

// #include<iostream>
// using namespace std;

// int countZero(long long n) {
//     int count = 0;
//     int a = 0;
//     while(n>a) {
//         if (n % 10 == 0)
//         count++;
//         n = n/10;
//         a++;
//     }
//     cout<<count;
//     return 0;
// }

// int main () {
//     long long n;
//     cin >> n;
//     countZero(n);
// }

// #include<iostream>
// using namespace std;

// int hcf(int a, int b) {
//     int lower = a > b ? b : a;
//     for (int i = lower; i >= 1; i--) {
//         if(a%i == 0 && b%i==0) {
//             return i;
//         }
//     }
//     return 1;
// }

// int main () {
//     int a, b;
//     cin>>a>>b;
//     cout<<hcf(a, b);
// }

z