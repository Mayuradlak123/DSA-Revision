#include "bits/stdc++.h"
using namespace std;
void longest(string str){
    int i,low=0,start=0,end=1,high;
    for (i=0; i<str.size(); i++){
        low=i;
        high=i-1;
        while(high>0 and str[low]==str[high]){
            if(low>end){
                end=low;
                start=high;
            }
            low++;
            high--;
        }
        low=i+1;
        high=i-1;
        while (high>0 and str[high]==str[low]){
          if(low>end){
            end=low;
            start=high;
          }
          low++;
          high--;
        }
    }
    cout <<"Longest Pallindromic Subsequence : "<<endl;
    for(i=start; i<=end; i++){
        cout <<str[i]<<"";
    }
}
int main (){
    string str;
    cout << "Enter str: "<<endl;
    cin>>str;
    longest(str);
    return 0;
}