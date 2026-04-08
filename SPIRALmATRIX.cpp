#include<iostream>
#include<vector>
using namespace std; 
// SPIRAL MATRIX
vector<int>spiralMatrix(vector<vector<int>> mat) {
    int m = mat.size(), n = mat[0].size();
    int strow=0,stcol=0,endrow=m-1,endcol=n-1;
    vector<int> ans ; 
    while(strow<=endrow && stcol<=endcol) {
        for(int i = stcol; i<=endcol; i++) {
            ans.push_back(mat[strow][i]);
        }
        for(int j = strow+1; j<=endrow; j++) {
            ans.push_back(mat[j][endcol]);
        }
        for(int i = endcol-1; i>=stcol; i--) {
            if(strow==endrow) break;
            ans.push_back(mat[endrow][i]);
        }
        for(int j = endrow-1; j>strow; j--) {
            if(stcol==endcol) break;
            ans.push_back(mat[j][stcol]);
        }
        strow++; endrow--; stcol++; endcol--;
    }
    return ans;
}
int main() {
    vector<vector<int>> mat= {{1,2},{3,5}};
    vector<int> ans = spiralMatrix(mat);
    for(int dig:ans) {
        cout<<dig<<" ";
    }
    return 0;
}