#include<iostream>
using namespace std;
// SUM OF DIGITS
int digSum(int n ) {
    int sum = 0 ; 
    while(n !=0) {
        int dig =n%10;
sum+=dig;
n/=10;

    }
    return sum;

} 
int main() {
   int n = 423;
  cout<< digSum(n)<<endl;
  return 0;
  
 }
