#include "bits/stdc++.h"
using namespace std;
// Problem statement find longest prefix and suffix in given string 
int kpmAlgo(string str){
   int i,n=str.length(),l=0,h=1,len=0,ans;
   for (i=0; i<n; i++){
     if(str[l]==str[h] and h<n){
        l++;
        h++;
        ans=max(len,ans);
     }
     else{
        l=0;
        h++; 
        len=0;
     }
   }
   return l;
}
int main (){
  string str;
  cout << "Enter string for find prefix and suffix: "<<endl;
  cin>>str;
 int ans=kpmAlgo(str);
 cout <<ans<<" ";
  return 0;
}