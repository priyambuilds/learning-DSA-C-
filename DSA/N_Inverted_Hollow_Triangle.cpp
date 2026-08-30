#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    for (int i = a; i >=1; i--) {
        for (int j = a; j >= i; j--) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == a) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }
    
    return 0;
}