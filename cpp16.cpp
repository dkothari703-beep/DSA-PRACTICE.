#include<iostream>
#include<string>
using namespace std; 
//STRING COMPRESSION
string compressedString(string chars) {
    int n = chars.length(); int  idx= 0 ; 
    

    for(int i = 0 ; i< n ;i++) {
        int count = 0;
    
        int ch = chars[i];
        while(i<n && chars[i]==ch) {
            i++; count++;
        }
        if(count==1)  chars[idx++]=ch;
       else  { chars[idx++]=ch;
string str=to_string(count);
   for(char dig:str) {
     chars[idx++]=dig;
   }     
    }
    i--;
}
chars.resize(idx);
return chars;
}
int main (){
    string chars={'a','b','b','c','c','c','c','d'};
    chars=compressedString(chars);
    for(char digi :chars) {
        cout<<digi<< " "; 
       }
return 0;
}