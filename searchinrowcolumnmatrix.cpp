#include<iostream> 
#include<vector>
 using namespace std;
 //search an element sorted  in  each row and column
 bool searchTarget(vector<vector<int>> mat , int target) {
    int m = mat.size(), n = mat[0].size();
    int r= 0,c=n-1;
    while(r<m && c>=0) {
        if(target==mat[r][c]) return true;
        else if (target<mat[r][c]) c--;
        else r++;
    }
    return false;
 }
  int main () {
      vector<vector<int>> mat={{1,2,3},{2,5,7},{3,8,9}};
    int target = 1;
    if(!searchTarget(mat,target)){
        cout<<" target  notfound";
    } else cout<<" target found";

    
    
    return 0;
}
    
  