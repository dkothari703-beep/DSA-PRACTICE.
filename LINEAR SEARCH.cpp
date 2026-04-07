#include<iostream>
#include<vector>

using namespace std;
// LINEAR SEARCH 
pair<int,int> linearSearch(vector<vector<int>> mat , int target) {
    int m = mat.size();
    int n= mat[0].size();
 for(int i = 0 ; i< m; i++) {
    for(int j = 0 ; j< n; j++) {
        if(mat[i][j]== target) {
            return {i,j};
          
        }
    }
}
return {-1,-1};
}
int main () {
    vector<vector<int>> mat= {{1,2},{6,5}};
    int target=5;
    pair<int,int> p=linearSearch(mat,target);
    cout<<p.first<<" "<<p.second<< endl;
    return 0;
    

}


