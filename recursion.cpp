#include<iostream>
#include<vector>
using namespace std; // printing the elements from n to 1;
void printN(int n ) {
    if(n==1) {
    cout<<"1\n";
   return ;
    }
    cout<<n<<" ";
    printN(n-1);
        
    }
    int factorial(int n) { // factorial of a number.
        if(n==0) return 1;
       return  n* factorial(n-1);
    }

int main() {
    printN(4);
    cout<<factorial(4);

    return 0;
}