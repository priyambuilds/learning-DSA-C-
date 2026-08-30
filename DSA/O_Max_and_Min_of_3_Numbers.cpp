#include<iostream>
using namespace std;

int main () {
    int a,b,c;
    cin>>a>>b>>c;
    int max = a>b && a>c ? a : b>a && b>c ? b : c ;
    int min = a<b && a<c ? a : b<a && b<c ? b : c ;
    cout<<"Min = "<<min<<endl<<"Max = "<<max;
}