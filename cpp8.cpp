#include<iostream>
#include<vector>
using namespace std;
//SORT OF 1S 2S 3S
vector<int> sorting(vector<int>nums ,int n) {
     int count0=0, count1=0, count2=0;
    for(int i = 0 ; i< n; i++) {
        if(nums[i]==0) count0++;
       else if(nums[i]==1) count1++;
        else  count2++;
    }
    int idx= 0 ; 
    for(int i = 0 ; i< count0; i++) {
        nums[idx++]=0;
    }
      for(int i = 0 ; i< count1; i++) {
        nums[idx++]=1;
    }
  for(int i = 0 ; i< count2; i++) {
        nums[idx++]=2;
    }
    return nums;
}
int main () {
    vector<int>  nums= {1,2,1,0,0,0,2};
    int n = 7;

   nums = sorting(nums,n);
   for(int i = 0 ; i< n ; i++) {
    cout<<nums[i]<< " ";
   }
    
    
    return 0;
}
