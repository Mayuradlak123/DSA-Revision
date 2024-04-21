#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
/*
Algorithm 
Max : Check arr[i] is greater than  ans replace ans previous value with arr[i]
Min : Check arr[i] is less  than  ans replace ans previous value with arr[i]
*/
int Max(int n, int *arr){
    int i,ans=INT_MIN;
    for ( i = 0; i < n; i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;
}

int Min(int n, int *arr){
    int i,ans=INT_MAX;
    for ( i = 0; i < n; i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    return ans;
}
int main (){
    int i,n;
    cout << "Enter Length of array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Maximum Element in array : "<<Max(n,arr)<<endl;
    
    cout << "Minimum Element in array : "<<Min(n,arr)<<endl;
return  0;
}