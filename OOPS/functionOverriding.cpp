#include "bits/stdc++.h"
using namespace std;

class Overriding
{
protected:
    int id, roll;
    string name, gender;

public:
    void getData()
    {

        cout << "Enter Student ID : " << endl;
        cin >> id;
        cout << "Enter Student Roll No. : " << endl;
        cin >> roll;
        cout << "Enter Student name : " << endl;
        cin >> name;
        cout << "Enter Student Gender : " << endl;
        cin >> gender;
    }
    void showData()
    {
        cout << "Im coming from Parent Class Component: "<<endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Id : " << id << endl;
        cout << "Student Roll No. : " << roll << endl;
        cout << "Student Gender : " << gender << endl;
    }
};
class Overriding02 : public Overriding
{
public:
    void showData()
    {
        cout << "Im Coming from Child Class Component "<<endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Id : " << id << endl;
        cout << "Student Roll No. : " << roll << endl;
        cout << "Student Gender : " << gender << endl;
    }
};
int main()
{
    Overriding object,ob;
    
    object.getData();
    object.showData();
}