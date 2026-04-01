#include<iostream>
using namespace std; // factorial of nCr
int factorial(int n ) {
   int fact= 1;
   if(n==0 || n==1) return 1;
   for(int i = 2 ; i<=n; i++) {
      fact*=i;
   }
   return fact;
}
int nCr(int n , int r) {
   int fact_N=factorial(n);
   int fact_R=factorial(r);
   int fact_NR=factorial(n-r);
int  ncr= factorial(n) / factorial(r) * factorial(n-r);
return ncr;
}

 int main() {
   int n = 4, r=3;
  cout<< nCr(n,r)<<endl;
  return 0;
  
 }