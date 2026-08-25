// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i <= n; i++) {
//         cin>>arr[i];
//     }

//     for(int num : arr) {
//         cout<<num<<" ";
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i <= n; i++) {
//         cin>>arr[i];
//     }
//     for (int i = n-1; i >= 0; i--) {
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for (int i = n-1; i >= 0; i--) {
//         sum += arr[i];
//     }
//     cout<<sum;
// }

#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int max = arr[0];
    int index = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<max) {
            max = arr[i], index = i+1;
        }
    }
    cout << max<<" "<<index;
}

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     int index = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if(arr[i]>max) {
//             max = arr[i], index = i+1;
//         }
//     }
//     cout << max<<" "<<index;
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n, x;
//     cin>>n>>x;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin>>arr[i];
//         if(arr[i] == x) {
//             cout<<"YES";
//             return 0;
//         }
//     }
//     cout<<"NO";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n, x;
//     cin>>n>>x;
//     int arr[n];
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         cin>>arr[i];
//         if(arr[i] == x) {
//             count++;
//         }
//     }
//     cout << count;
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin>>arr[i];
//     }
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < arr[i - 1])
//         {
//             cout << "NO";
//             return 0;
//         }
//     }
//     cout<<"YES";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin>>n;
//     int arr[n];
//     int c0 = 0, c1 = 0;
//     for (int i = 0; i < n; i++) {
//         cin>>arr[i];
//         if(arr[i] == 0) {
//             c0++;
//         } else c1++;
//     }
//     for (int i = 1; i <= c0; i++) {
//         arr[i] = 0;
//     }
//     for (int i = c0 ; i < n; i++) {
//         arr[i] = 1;
//     }

//     for (int i = 0; i < n; i++) {
//         cout<<arr[i]<< " ";
//     }
// }