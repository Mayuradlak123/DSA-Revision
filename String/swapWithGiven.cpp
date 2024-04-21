#include "bits/stdc++.h"
using namespace std;

int main (){
    string str,rep,repwith;
    cout << "Enter ans string : "<<endl;
    cin>>str;
    cout << "Enter string which you want to replace : "<<endl;
    cin>>rep;
    cout << "Enter string with you want to replace :"<<endl;
    cin>>repwith;
    for (int i=0; i<str.size(); i++){
        if(str.substr(i,rep.length())==repwith){
            string temp=str.substr(i,rep.length());
            swap(temp,repwith);
        }
    }
    
    return 0;
}