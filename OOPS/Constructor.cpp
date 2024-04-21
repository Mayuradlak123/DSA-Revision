#include "bits/stdc++.h"
using namespace std;
/*
In Java, a copy constructor is a special constructor that allows you to create a 
new object by copying the contents of another object of the same class. 
*/
class Constructor
{
public:
  Constructor()
  { // Created Default Conistructor
    cout << "This is a Default Constructor : " << endl;
  }
  Constructor(int a, int b)
  { // Parameterized Construtor
    cout << "This is Parametereiesed Constructor : " << endl;
    cout << "Sum of Given Number : " << a + b;
    cout << endl;
  }
  Constructor(string name)
  { // Overlaoding of Constructor
    cout << "I am Overloading the Constructor: " << endl;
    cout << "Your name is : " << name << endl;
  }
  void getName()
  {
    cout << "Im Calling this Method using copy constructor " << endl;
  }
  void copyCnt(Constructor object)
  {
    cout << "Function is Called Inside second Function : " << endl;
    object.getName();
  }
};

int main()
{
  Constructor c;
  /* Constructor ob(1,3);
   string name;
   cout  << "Enter your name : "<<endl;
   cin>>name;
   Constructor str(name);*/

  c.copyCnt(c);
  return 0;
}