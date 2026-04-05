#include<iostream>
#include<vector>
using namespace std; // ARMSTRONG NUMBER
bool isArmstrongNum(int n) {
    int sum= 0;
    int copyNum=n;
    while(n>0) {
        int dig=n%10;
        sum+=dig*dig*dig;
        n/=10;
    }
    if(sum==copyNum) {
        return true;
    }
    else return false;
    

}
int main () {
    int n = 153;
cout<<isArmstrongNum(n);
return 0;
}