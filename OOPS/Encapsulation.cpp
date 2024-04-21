#include "bits/stdc++.h"
using namespace std;
/*
Encapsulation in C++ is defined as the wrapping up of data and information
in a single unit. In Object Oriented Programming, Encapsulation is defined
as binding together the data and the functions that manipulate them.
*/
class Encapsulation
{
private:
  string name;
  int age;

public:
  // Encapsulation(string name,int age){
  //     this->age=age;
  //     this->name=name;
  // }
  void setName(string name)
  {
    this->name = name;
  }
  string getName()
  {
    return name;
  }
  void setAge(int age)
  {
    this->age = age;
  }
  int getAge()
  {
    return age;
  }
};
int main()
{
  Encapsulation object;
  object.setName("Mayur Adlak");
  object.setAge(20);
  cout << "Your age is  :" << object.getName() << endl;
  printf("Your age is %d : ", object.getAge());
  return 0;
}