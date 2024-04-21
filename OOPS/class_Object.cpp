#include "bits/stdc++.h"
using namespace std;

class myClass
{
public:
    int a, b;
    string name = "Mayur Adlak";

public:
    int sum()
    {
        cout << "Enter value of A and B : " << endl;
        cin >> a;
        cin >> b;
        return a + b;
    }
    int minus()
    {
        cout << "Enter value of A and B : " << endl;
        cin >> a;
        cin >> b;
        return a - b;
    }
    int Into()
    {
        cout << "Enter value of A and B : " << endl;
        cin >> a;
        cin >> b;
        return a * b;
    }
    int Power(int n, int p)
    {
        int i, ans = 1;
        for (i = 1; i <= p; i++)
        {
            ans *= n;
        }
        return ans;
    }
    void checkType()
    {
        int d = 10;
        char c = 'M';
        float value = 98.73f;
        double val = 934.8478;
        cout << "Data type of given Variable is : " << endl;
    }
};
class baseClass
{
public:
    string name, id;

    baseClass()
    {
        cout << "Enter your name " << endl;
        cin >> name;
        cout << "Enter your id " << endl;
        cin >> id;
    }
    friend void getData(baseClass);
};
void getData(baseClass obj)
{
    cout << "Your User name is : " << obj.name << endl;
    cout << "Your User ID is : " << obj.id << endl;
}
class staticFunction
{
    friend void Data(staticFunction);
};
void Data(staticFunction s)
{
    static int count = 0;
    cout << "Value of Count : " << count << endl;
    count++;
}
int main()
{
    /* myClass object;
     int n,p;

     cout <<"Enter Number for find square : "<<endl;
     cin>>n;
     cout << "Enter which power you want to get : "<<endl;
     cin>>p;
     int ans=object.Power(n,p);
     printf("Square of Given number is : %d ",ans);*/
    baseClass obj;

    getData(obj);
    staticFunction s;
    cout << "I am Using Static Keyword in C++ : " << endl;
    Data(s);
    Data(s);
    Data(s);
    return 0;
}