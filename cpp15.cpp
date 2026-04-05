#include<iostream>
#include<string>
#include<algorithm>
// reversing the string completely
using namespace std;
string reverseStr(string s) {
    int n = s.length();
    string ans="";
    reverse(s.begin(),s.end());
    for(int i = 0 ; i< n; i++ ) {
        string word="";
        while(i<s.length() &&s[i]!=' ') {
            word+=s[i];
            i++;
        }
        reverse(word.begin() , word.end());
        if(word.length()>0) {
            ans+=" "+word;
        }
    }
    return ans.substr(1);

}
int main () {
    string s= "hello world";
 string  ans=  reverseStr(s);
 for(char ch : ans) {
 cout<<ch;
 }
    return 0;

}