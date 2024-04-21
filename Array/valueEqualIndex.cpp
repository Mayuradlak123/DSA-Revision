#include "bits/stdc++.h"
using namespace std;
bool valueEqualIndex(int n,int arr[]){
 for (int i=0; i<n; i++){
    if(arr[i]==i){
        return true;
    }
 }
 return false;
}
int  main (){
    int i,n;
    cout << "Enter value of n "<<endl;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++){
       cin>>arr[i];
    }
  valueEqualIndex(n,arr)?printf("Index value pair is present "):printf("not present");
    return 0;
}