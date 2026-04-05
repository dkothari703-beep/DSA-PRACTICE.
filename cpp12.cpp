#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
//  NXT PERMUTATION.
vector<int> nextPermutation (vector<int>arr ,int n) {
   
    int piv= -1;
    for(int i =n-2; i>=0; i--) {
        if(arr[i]<arr[i+1]) {
            piv=i;
            break;
        }
    }
    
    if(piv==-1) {
        reverse(arr.begin(),arr.end());
    
    return arr;
    }
    
    for(int i= n-1; i>piv;i--) {
        if(arr[piv]<arr[i]) {
            swap(arr[piv],arr[i]);
            break;
        }
    }
    int i = piv+1,j=n-1;
    while( i<j) {
         
            swap(arr[i],arr[j]);
            i++; j--;
       
         }
        return arr;
         }

    

int main () {
    vector<int> arr= {1,2,3,6,5,4};
    int n = 6;
   arr= nextPermutation(arr,n);
   for(int i= 0 ; i< n; i++) {
    cout<<arr[i]<<"";
   }
   return 0;

}