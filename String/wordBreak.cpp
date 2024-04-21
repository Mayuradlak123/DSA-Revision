#include "bits/stdc++.h"
using namespace std; 
// Leetcode : https://leetcode.com/problems/word-break/
bool wordBreak(vector<string>v,string str){
    string temp="";
    for (auto x:v){
        temp+=x;
    }
    
    for (int i=0; i<temp.size(); i++){
        if(temp.substr(i,str.length())==str){
            return true;
        }
    }
    return false;
}
int main (){
    int n,i;
    cout << "Enter an length of array : "<<endl;
    cin>>n;
    string str;
    
    vector<string>v(n);
    cout << "Enter word of string : "<<endl;
    for (i=0; i<n; i++){
        cin>>v[i];
    }
    cout << "Enter an Segment of string : "<<endl;
    cin>>str;
if(wordBreak(v,str)){
    cout << "Word Segment is present in array: True "<<endl;
    }
    else{
        cout<<" Not present: ";
    }    return 0;
}