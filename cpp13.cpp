#include<iostream>
#include<string>
using namespace std;
//  valid palindrome.
bool isAlphaNum(char ch ) {
    if(ch<=9 && ch>=0 || tolower(ch)>='a' && tolower(ch)<='z') {
    return true;
    }
    return false;
}
bool isPalindrome( string s) {
    int i = 0 , j=s.length()-1;
    while(i<=j) {
        if(!isAlphaNum(s[i])) {
            i++; continue;
        }
         if(!isAlphaNum(s[j])) {
            j--; continue;
        }
        if(towlower(s[i])!=tolower(s[j])) {
            return false; }
            i++; j--;
          
        }
          return true;
        
    }

 int main () {
    string s="abbbca";
   cout<< isPalindrome(s);
    return 0;
}