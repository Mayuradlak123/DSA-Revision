#include "bits/stdc++.h"
using namespace std;
bool isRotation(string str1,string str2){
    int sum1=0,sum2=0;
    if(str1.size()!=str2.size()){
        return false;
    }
    for (auto x:str1){
        sum1+=x;
    }
    for (auto x:str2){
        sum2+=x;
    }
    if(sum1==sum2){
        return true;
    }
    else{
        return false;
    }
}
int main (){

    string str1,str2;
    cout << "Enter First String "<<endl;
    cin>>str1;
    cout << "Enter Second String "<<endl;
  cin>>str2;
 bool ans= isRotation(str1,str2);
 if(ans){
    cout << "String is Rotation of each other "<<endl;
 }
 else{
    cout << "Not Rotation of each other : "<<endl;
 }
  return 0;

}