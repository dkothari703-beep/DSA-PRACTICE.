#include<iostream>
#include<string>
//REMOVE ALL OCCURENCES OF A PART IN STRING 
using namespace std;
string allOccurences(string s,string part) { 
    while(s.length()>0 && s.find(part)<s.length()) {
        s.erase(s.find(part),part.length());
    }
    return s;
}
    int main () {
        string s= "abcdabcdabc";
    string part="abc";
    s=allOccurences(s,part);
    for(char ch:s) {
        cout<<ch<< " ";
    }
return 0;  }


