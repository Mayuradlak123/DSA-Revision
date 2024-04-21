#include "bits/stdc++.h"
using namespace std;
void findPattern(string str,string pattern){
    int i,n=str.length();
    cout <<"Pattern found in string at given string : "<<endl;
    for (i=0; i<n; i++){
        if(str.substr(i,pattern.length())==pattern){
            cout <<i+1<<" ";
        }
    }
}
int main (){
   string str,pattern;
   cout << "Enter main String : "<<endl;
   cin>>str;

   cout <<"Enter Pattern for find in string : "<<endl;
   cin>>pattern;
   findPattern(str,pattern);
   return 0;
}