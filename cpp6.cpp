#include<iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for(int i = 0 ; i<n-1 ; i++) {
        int SI=i;
        for(int j = i+1; j<n; j++ ) {
            if(arr[SI]<arr[j]) {
                SI=j;
            }
        
        swap(arr[SI],arr[j]);
    }
}
}
int main () {
    int n = 4;
    int arr[]= {1,6,2,4};
   selectionSort(arr,n);
    for(int i = 0 ; i<n ; i++) {
        cout<<arr[i]<< " ";
    }
    return 0;
}
