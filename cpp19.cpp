#include<iostream>
#include<vector>
using namespace std;
// GCD 
int gcdN(int a, int b) {

    while(a>0 && b>0) {
        if(a>b) a=a%b;
        else b=b%a;
    }
         if(a==0) return b;
         else return a;
    }
int lcmN(int a , int b) {
    int lcm= (a*b)/gcdN(a,b);
    if(a==0 || b==0) return 0;
    else return lcm;
    
}
int revNum(int n ) {
    int rev=0;
    while(n!=0) {
        int dig = n%10;
        rev= rev*10 +dig;
    n/=10;
    }
    return rev;
}


int main () {
    int a = 12,b=4, n=456;
    cout<<gcdN(a,b)<< "  ";
    cout<<lcmN(a,b)<<" ";
    cout<<revNum(n);
    return 0;
}