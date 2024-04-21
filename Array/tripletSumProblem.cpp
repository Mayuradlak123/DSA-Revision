#include "bits/stdc++.h"
using namespace std;
bool tripleSum(int n,int k,int arr[]){
    int sum=0,ans=0,i,j;
  for(i=0; i<n; i++){
    sum=arr[i];
    for (j=i+1; j<n; j++){
        sum+=arr[i]+arr[j];
        if(sum==k){
            return true;
        }
        
    }
  }
  return false;
}
int main (){
    /*
    n = 5, X = 10
arr[] = [1 2 4 3 6]
Output:
1
    */
    int i,n,k;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>k;
    if(tripleSum(n,k,arr)){
        cout <<"Triple sum is True : "<<endl;
    }
    else{
        cout <<" Not making pair : "<<endl;
    }
    return 0;
}