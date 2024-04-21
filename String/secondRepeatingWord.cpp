#include "bits/stdc++.h"
using namespace std ;
string secondRepeat(string a[],int n){
    unordered_map<string,int>mp;
    int j,i,count=0;
    string ans="";
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>=2){
            ans=a[i];
            break;
        }
        count=0;
    }
    return ans;
}
int main (){
    int i,n;
    cout <<"Enter size of array : "<<endl;
    cin>>n;
    string a[n];
    cout <<"enter word of string : "<<endl;
    for (i=0; i<n;i++){
        cin>>a[i];
    }
    string ans= secondRepeat(a,n);
    cout <<"Second reapiting word is : "<<ans<<endl;
    return 0;
}