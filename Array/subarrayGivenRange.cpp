#include "bits/stdc++.h"
using namespace std; 
int subarrayGivenRange(int start,int end,int n,int *arr){
    //22000 /22054
// Time Limit Exceeded
    int i,j,k,count=0,sum=0;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            for (k=i; k<=j; k++){
              sum+=arr[k];
            }
            cout <<sum<<" ";
            if(sum>=start and sum<=end){
                count++;
            }
            sum=0;
        }
    }
    cout <<endl;
    return count;
}
int main (){
    int n,start,end,i;
    cout <<"Enter n : "<<endl;
    cin>>n;
    cout << "Enter starting range :" <<endl;
    cin>>start;
    cout << "Enter Ending Range : "<<endl;
    cin>>end;
    int arr[n];
    cout <<"Enter element of array : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=subarrayGivenRange(start,end,n,arr);
    printf("Found %d  Subarray which sum is in given range ",ans);
return 0;
}
