#include "bits/stdc++.h"
using namespace std;
int splitBinary(string str){
    int i,c0=0,c1=0,count=0;
    for (i=0; i<str.size(); i++){
        if(str[i]=='0'){
            c0++;
        }
        else{
            c1++;
        }
        if(c0==c1){
            count++;
        }
    }
    return count;
}
int main (){
    string str;
  cout << "Enter an string which contain 0 an 1: "<<endl;
  cin>>str;
  cout << "Split Binary is : "<<splitBinary(str);
  return 0;
}