#include<iostream>
#include<vector>
using namespace std;
void getAllSubsets(vector<int> &arr, vector<int> &ans, int i) {
    int n = arr.size();
    if(i==arr.size()) {
        for(int val: ans) {
            cout<< val<<" ";
        }
        cout<<endl;
        return;
    }
    //including the element.
    ans.push_back(arr[i]);
    getAllSubsets(arr, ans, i+1);
    ans.pop_back();
     getAllSubsets(arr, ans, i+1);
}
int main () {
    vector<int> arr= {2,3,4,6,3};
    vector<int> ans;
getAllSubsets(arr,ans,0);

    return 0;
}

    



   