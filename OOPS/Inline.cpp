#include "bits/stdc++.h"
using namespace std;
// inline int sum(int a,int b){
//    return (a+b);
// }
//
// C++ provides an inline functions to reduce the function call overhead

class InlineFunction {
  public:
  int getSum(int a,int b);
  int getSub(int a,int b);
  int getMul(int a,int b);
};
inline int InlineFunction::getSum(int a,int b){
  return a+b;
}
inline int InlineFunction::getSub(int a,int b){
    return b-a;
}
inline int InlineFunction::getMul(int a,int b){
    return a*b;
}
int main (){
    int a=10,b=90;
    InlineFunction object;
    printf("Sum of a and b is : %d",object.getSum(a,b));
    cout <<endl;
    printf("Subtraction of Given Number is : %d",object.getSub(a,b));
    cout << endl;
    printf("Multiplication of given Number : %d",object.getMul(a,b));
    // int a,b
    // cout << "Enter value of a: "<<endl;
    // cin>>a;
    // cout << "Enter value of b: "<<endl;
    // cin>>b;
    // printf("Sum of Given Number is  %d : ",sum(a,b));
    return 0;
}