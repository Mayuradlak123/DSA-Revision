#include "bits/stdc++.h"
using namespace std;

class Destructor
{
public:
  int count = 0;

public:
  Destructor()
  {
    this->count = 20;
    cout << " I am Constructor : " << endl;
  }
  ~Destructor()
  {

    cout << "The value of Counter  : " << this->count << " ";
    cout << "Destructor Part 2 " << endl;
  }
  void Constructor()
  {
    cout << "This is Method for Testing : " << endl;
  }
};
int main()
{
  Destructor a;
  a.Constructor();
  a.Constructor();
  a.count = 10;
  cout << a.count << " ";

  return 0;
}
/*
Destructor is an instance member function which is invoked automatically
 whenever an object is going to be destroyed. Meaning, a destructor is the
 last function that is going to be called before an object is destroyed.
*/