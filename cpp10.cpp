#include<iostream>
#include<vector>
using namespace std;
//MERGE THE SORTED ARRAYS.
vector<int > mergeArray(vector<int>arr1,vector<int> arr2, int m , int n) {
    int i = m-1 , j=n-1, k= m+n-1;
    
    while(i>=0 && j>=0) {
        if(arr1[i]>=arr2[j]) {
            arr1[k--]=arr1[i--];
        }
        else arr1[k--]= arr2[j--];
    }
    
    
    while(j>=0) {
        arr1[k--]= arr2[j--];
    }
    return arr1;
   
    }
    int main () {
        vector<int> arr1= {2,3,4,0,0,0};
     vector<int> arr2={1,3,5};
        int m =3,n=3;
        
       arr1= mergeArray(arr1,arr2,m,n);
        for(int i = 0 ; i< m+n; i++) {

        cout<<arr1[i]<<" ";
        }
        return 0;
    }
    

    

