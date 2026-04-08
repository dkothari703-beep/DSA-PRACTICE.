#include<iostream>
#include<vector>
using namespace std;
//DIAGONAL SUM
int diagonalSumN(int mat[][3], int n ) {
     int diagonalSum=0;
     for(int i = 0 ; i< n; i++) {
        
        for(int  j= 0 ; j< n; j++) {
            if(i==j) {
                diagonalSum+=mat[i][j];
            }
            else if(j==n-i-1) {
                diagonalSum+=mat[i][j];
            } 
            
        }
     }
     return diagonalSum;
    }
     int diagonalSumM(int mat[][3], int m ) {
     int sum=0;
     for(int i = 0 ; i< m; i++) {
    
                sum+=mat[i][i];
           if(i!=m-i-1){
                sum+=mat[i][m-i-1];
           }
        }
     
     return sum;
}
int main() {
     int mat[][3]={{1,2,3},{3,4,5},{7,3,1}};
    int n=3,m=3;

   cout<< diagonalSumN(mat,n)<< endl;
   cout<<diagonalSumM(mat,  m );
    return 0;
}