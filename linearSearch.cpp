#include<iostream>
#include<vector>
using namespace std;
pair<int, int> linearSearch(vector<vector<int>> mat,int target ){
    int m = mat.size(),n= mat[0].size();
    for(int i= 0  ;i< m ; i++) {
        for(int  j = 0 ; j< n ; j++) {
            if(target==mat[i][j]) {
                return {i,j};
            }
        }
    }
     return {-1,-1};
}

int main ( ) {
    vector<vector<int>> mat={{1,2},{7,8}};
    int target= 8;
   pair<int,int>p= linearSearch(mat,target);
   cout<<p.first<<" "<< p.second<< endl;
 return 0;
}