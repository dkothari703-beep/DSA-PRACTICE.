#include<iostream>
#include<vector>
using namespace std;
//MERGE THE SORTED ARRAYS in ans vector.
void mergeArrays(int arr1[],int arr2[], int m , int n,int ans[]) {
    int i = 0 , j=0, k= 0;
    
    while(i<m && j<n) {
        if(arr1[i]<=arr2[j]) {
            ans[k++]=arr1[i++];
        }
        else ans[k++]= arr2[j++];
    }
    while(i<m) {
        ans[k++]= arr1[i++];
    }
    while(j<n) {
        ans[k++]= arr2[j++];
    }
   
    }
    int main () {
        int arr1[]= {2,3,4};
        int arr2[]={1,3,5};
        int m =3,n=3;
        int ans[m+n];
        mergeArrays(arr1,arr2,m,n,ans);
        for(int i = 0 ; i< m+n; i++) {
            cout<<ans[i];
        }
        return 0;
    }
    

    

