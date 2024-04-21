
#include "bits/stdc++.h"
using namespace std;

class Operator
{
public:
   int a, b, c;

public:
   void operator+()
   {
      cout << "Enter value of a: " << endl;
      cin >> a;
      cout << "Enter value of b: " << endl;
      cin >> b;
   }
   void operator++()
   {
      cout << "Addition of Givem Number is I have Overload + Operator : " << a + b << endl;
   }
   void operator-()
   {
      cout << "Subtraction of Given Number is I have Overload - Operator : " << a - b << endl;
   }
   void operator--()
   {
      cout << "I have Overload -- Operator : " << endl;
   }
};
class Operator2 : public Operator
{
private:
   string name = "Mayur Adlak ";

public:
   void operator*()
   {

      cout << " I have Overload * operator : " << endl;
   }
   void operator!()
   {
      cout << "My name is : " << name << endl;
      cout << "I have Overload ! operator " << endl;
   }
};
int main()
{
   Operator2 object;
   +object;
   ++object;
   -object;
   --object;
   !object;

   return 0;
}