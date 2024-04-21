/*
A virtual function is a member function which is declared within
 a base class and is re-defined (overridden) by a derived class
*/
#include "bits/stdc++.h"
using namespace std;
class Virtual{
  public:
  void Display(){
     cout << "This is a virtual function : "<<endl;
  }

};
class base:public Virtual{
   public:
  virtual void Display(){
      cout << "Hello This is Base Class Function : "<<endl;
   }
};
int main (){
   Virtual *object;
   base v;
   object=&v;
   object->Display();
   v.Display();
   
   return 0;
}