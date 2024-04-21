#include "bits/stdc++.h"
using namespace std; 
int waterContainer(int n,int arr[]){
    int i=0,area,maxArea=0;
    n=n-1;
    while(i<n){
        int mini=min(arr[i],arr[n]);
        area=mini*(n-i);
        maxArea=max(area,maxArea);
        if(mini==arr[i]){
            i++;
        }
        else{
            n--;
        }
    }
    return maxArea;
}
int main (){
    int i,n;
    cout  << "Enter n : "<<endl;
    cin>>n;

    int arr[n];
    cout << "Enter array element : "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    printf("Water Container with Maximum wate : %d ",waterContainer(n,arr));
    return 0;
}