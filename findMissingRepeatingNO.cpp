#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
// find missing and repeating number in a matrix.
vector<int> missRepeat(vector<vector<int>> grid) {
    int n = grid.size();
    vector<int> ans; 
   
    unordered_set<int> s;
    int actualSum=0,a,expSum,b;
    for(int i = 0 ; i < n; i++) {
        for(int j = 0 ; j < n ; j++) {
            actualSum+=grid[i][j];
    if(s.find(grid[i][j]) !=s.end()) {
          a= grid[i][j];    
        }
        s.insert(grid[i][j]);
        }
    }
     expSum= n*n  *(n*n+1)/2;
     b = expSum+a- actualSum;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}
int main() {
    vector<vector<int>> grid= {{1,2,2},{3,4,6},{5,7,8}};
    vector<int> ans=missRepeat(grid);
    cout<<ans[0]<< " "<< ans[1]<< endl;
    return 0;
}
