#include<iostream>
#include<vector>
#include<climits>
using namespace std; 
int maxRowSumN(int  mat[][3], int m , int n){
  
    int maxRowSum=INT_MIN;
    for(int i = 0 ; i< m ; i++ ){
        int rowSum = 0 ; 
        for(int j = 0 ; j< n ;j++){
            rowSum+=mat[i][j];   
           }
           maxRowSum=max(maxRowSum,rowSum);
    }
    return  maxRowSum;
}
int maxColSumN(int  mat[][3], int m , int n){
  
    int maxColSum=INT_MIN;
    for(int i = 0 ; i< n ; i++ ){
        int sum = 0 ; 
        for(int j = 0 ; j< m ;j++){
            sum+=mat[j][i];   
           }
           maxColSum=max(maxColSum,sum);
    }
    return  maxColSum;
}
 int main () {
    int mat[][3]={{1,2,3},{3,4,5},{7,3,1}};
    int m = 3,n=3;

    cout<<maxRowSumN(mat,m,n)<< endl;
    cout<<maxColSumN(mat,m,n);




    return 0;
 }