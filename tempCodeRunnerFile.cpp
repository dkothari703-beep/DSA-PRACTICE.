 #include<iostream>
 using namespace std;
 // DECIMAL TO BINARY 
 int decBin(int n) {
    int ans= 0 , pow=1;
    while(n!=0) {
        int rem= n%2;
        ans=rem*pow;
        pow*=10;
        n/=2;
    } 
    return ans;

 }
 int main () {
    int n= 4;
cout<< decBin(n);
    return 0;
 }