#include<iostream>
#include<vector>
using namespace std;
//SORT OF 1S 2S 3S using DNF(DUTCH NATIONAL FLAG)
vector<int> sorting(vector<int>nums ,int n) {
    int l= 0, m=0,h=n-1;
    while(m<=h) {
        if(nums[m]==0) {
            swap(nums[l],nums[m]);
            l++; m++;
        }
        else if (nums[m]==1) {
            m++;
        }
        else {
              swap(nums[h], nums[m]);
              h--;
    }
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
