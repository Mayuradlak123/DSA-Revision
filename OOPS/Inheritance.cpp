#include "bits/stdc++.h"
using namespace std;
class classFirst
{
public:
    int age = 20;
    string name = "Mayur Adlak", city;

public:
    void Display()
    {
        cout << "Display Function of First Class " << endl;
        cout << "Your  Name is Before changing: " << name << endl;
    }
    void getCity()
    {
        cout << "This is getCity method : " << endl;
        cout << "Replace your name : " << endl;
        name = "Om Adlak";
        cout << "Enter your city name : " << endl;
        city = "Indore";
    }
    classFirst(){
        cout <<"Im Constructor of classFirts class : Constructor"<<endl;
    }
};
class secondClass : public classFirst
{
public:
    string college = "Oriental University Indore";

public:
    void showName()
    {
        cout << "This is Implementation of Single Inheritance : " << endl;
        cout << "Your Good name is : " << name << endl;
        cout << "Your Living City is : " << city << endl;
    }
    secondClass(){
        cout << "I amd Constructor from secondClass : Constructor"<<endl;
    }
};
class thirdClass : public secondClass
{
public:
    string enroll = "OUI120BCS049", district = "Indore";

public:
    void Display()
    {
        cout << "Your Enrollment Number is : " << enroll << endl;
        cout << "Your District is : " << district << endl;
    }
    thirdClass(){
        cout << "I am Constructor from third class : Constructor"<<endl;
    }
};
class finalClass : public thirdClass // Multi level Inheritance
{
public:
    void Display()
    {
        cout << "This method is Showing all detail of Student " << endl;
        cout << "Student name is : " << name << endl;
        cout << "student Enrollment is : " << enroll << endl;
        cout << "Student age is : " << age << endl;
        cout << "Student Living address is : " << city << endl;
        cout << "Student district is " << district << endl;
    }
    finalClass(){
    cout << "I am Constructor from FinalClass :Constructor "<<endl;
    }
};

class MainClass : public secondClass, thirdClass //Multiple Inheritance 
{
public:
    void Display()
    {
        cout << "let See what we have :" << endl;
        cout << "Your College name is : " << enroll << endl;
        cout << "My District is : " << district << endl;
    }
    MainClass (){
        cout << "This is Main Class Contructor :Constructor "<<endl;
    }
    
};
int main (){
MainClass object ;
    return 0;
}