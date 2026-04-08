#include<iostream>
#include<vector>
using namespace std;
// search an element in the   sorted matrix (log(m*n));
bool searchElement(vector<vector<int>> mat , int target, int row) {
    int n = mat[0].size();
    int st = 0 , end = n-1;
    while(st<=end) {
        int mid = st + (end -st)/2;
        if(target==mat[row][mid] ) return true;
        else if (target>mat[row][mid]) {
            st= mid+1;
        }
        else end = mid-1;
    }
    return false;
}
bool searchRow(vector<vector<int>> mat , int target ) {
    int m = mat.size(),n= mat[0].size();
    int str= 0, endr=m-1;
    while(str<=endr) {
        int midr = str + (endr-str)/2;
        if(target>=mat[midr][0] && target<=mat[midr][n-1]) {
            return searchElement(mat, target, midr);
        }
        else if (target>mat[midr][n-1]) {
            str=midr+1;
        }
        else endr=midr-1;
    }
    return false;
}

int main () {
    vector<vector<int>> mat={{1,2},{4,5},{7,8}};
    int target = 3;
    if(!searchRow(mat,target)){
        cout<<" target  notfound";
    } else cout<<" target found";

    
    
    return 0;
}