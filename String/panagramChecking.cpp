#include "bits/stdc++.h"
using namespace std;
bool isPanagram(string str){
    int i,n=str.size();
    
    set<char>s={'a','b','c','d','e','f','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  for (i=0; i<str.length(); i++){
    if(s.find(str[i])==s.end()){
        return false;
    }
  }
    return true;
}
int main (){
    string str;
    cout << "Enter sentance : "<<endl;
    getline(cin,str);
    if(isPanagram(str)){
      cout << "Given string is panagram : "<<endl;
    }
    else{
        cout << "Not panagram : "<<endl;
    }
    return 0;
}