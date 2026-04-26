#include<iostream>
#include<vector>
using namespace std; // subsets for unique values
void getAllSubsets(vector<int> &arr, vector<int> &ans, int i,vector<vector<int>> &subsets) {
    
    if(i==arr.size()) {
        subsets.push_back({ans});
        return;
    }
    ans.push_back(arr[i]);
     getAllSubsets(arr, ans, i+1,subsets);
     ans.pop_back();
      getAllSubsets(arr, ans, i+1,subsets);
}
vector<vector<int>> allSubsets(vector<int> &arr) {
    vector<vector<int>> subsets;
    vector<int> ans;
     getAllSubsets(arr, ans, 0,subsets);
     return subsets;
    
}
int main() {
    vector<int> arr= {1,3,2,4};
    vector<int> ans;
    vector<vector<int>> subsets= allSubsets(arr);
    for(vector<int> subset: subsets) {
        cout<< "{";
            for(int val: subset) {
                cout<< val << " ";
            }
            cout<< "}";
    } 
   return 0;
}