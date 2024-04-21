#include "bits/stdc++.h"
using namespace std;

class removeConsecutive{
    public:
    string removeChar(string str){
      string ans="";
      int n=str.size(),i;
      for (i = 0;i<n;i++){
        if(str[i]!=str[i+1]){
             ans+=str[i];
        }
      }
      return ans;
    }
};
int main(int argc, char const *argv[])
{
    string str;
    cout <<"Enter an string : "<<endl;
    cin>>str;
     
     removeConsecutive obj;
     cout <<"String after removing consecutive duplicates: "<<obj.removeChar(str)<<endl;

    return 0;
}
/*
Enter a string: aabbccddaaeeff
String after removing consecutive duplicates: abcdaef

*/