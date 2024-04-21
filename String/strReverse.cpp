#include "bits/stdc++.h"
using namespace std;
string strReverse(string str){
    int i;
    string ans="";
    for(i=str.length(); i>=0; i--){
        ans.push_back(str[i]);
    }
    return ans;
}
int main (){
  string str;
  cout <<"Enter an String : "<<endl;
  getline(cin,str);
  string ans=strReverse(str);
   cout << "Reverse of Given String is : "<<ans<<endl;
//  printf("Reverse of Given String : %s ",strReverse(str));
  return 0;
}