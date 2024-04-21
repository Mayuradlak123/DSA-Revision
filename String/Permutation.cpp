#include "bits/stdc++.h"
using namespace std;

class printPermutation{
    public:
    void permutation(string str,int index,int n){
      if(index==n){
        cout <<str<<" ";
      }
      for (int i=index; i<n; i++){
         swap(str[index],str[i]);
         permutation(str,index+1,n);
         swap(str[index],str[i]);
      }
    }
};
int main(int argc, char const *argv[])
{
  printPermutation obj;
  string str;
  cout << "Enter an String: "<<endl;
  cin>>str;
  cout <<"All Permutation of given String : "<<endl;
  obj.permutation(str,0,str.length());
  return 0;
}
