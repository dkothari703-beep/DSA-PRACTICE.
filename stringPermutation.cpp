#include<iostream>
#include<vector>
#include<string>
using namespace std; //permmutation for strings
void permutations(string &str, vector<string> & ans, int idx) {
    if(idx==str.length()) {
       ans.push_back(str);
        return;
    }

    for(int i = idx; i<str.length(); i++) {
        swap(str[idx], str[i]);
        permutations(str,ans,idx+1);
         swap(str[idx], str[i]);
    }

}
vector<string> permute(string & str) {
    vector<string> ans;
     permutations(str,ans,0);
     return ans;


}
int main () {
string str= "abc";
vector<string> ans= permute(str);
for(string val:ans) {
cout<< val << " ";
cout<<endl;
}
return 0;


}
