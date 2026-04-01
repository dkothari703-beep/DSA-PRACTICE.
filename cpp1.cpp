#include<iostream>
using namespace std; // factorial of n
int factorialN(int n ) {
   int fact= 1;
   if(n==0 || n==1) return 1;
   for(int i = 2 ; i<=n; i++) {
      fact*=i;
   }
   return fact;
}
 int main() {
   int n = 4;
  cout<< factorialN(n)<<endl;
  return 0;
  
 }