/*
 a friend function can be granted special access to private
  and protected members of a class in C++.
*/
#include "bits/stdc++.h"
using namespace std;
class FreindFunction
{
protected:
    string roll = "OUI120BCS049",
           refId = "MAYUR2002",
           username = "Mayuradlak123",
           email = "mayuradlak030@gmail.com";
     
    //     int id=49;
    //      string name="Mayur Adlak";

    //    friend void getInfo(FreindFunction object);
    // };
    // void getInfo(FreindFunction ob){
    //     cout << "Your Unique Id Number is : "<<ob.id<<endl;
    //     cout << "your name is : "<<ob.name<<endl;
    // }

    friend void showDetail(FreindFunction object);
};

void showDetail(FreindFunction ob)
{
    cout << "Your Roll Number is : " << ob.roll << endl;
    cout << "Your Email is : " << ob.email << endl;
    cout << "Your Reference Id is : " << ob.refId << endl;
    cout << "Your username is : " << ob.username << endl;
}
int main()
{
    FreindFunction object;

    showDetail(object);
    return 0;
}