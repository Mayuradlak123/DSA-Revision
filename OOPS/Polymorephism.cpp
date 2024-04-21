#include "bits/stdc++.h"
using namespace std;

class baseClass
{
    // Function Overloading
public:
    string Calculation(int a, int b)
    {
        return "Sum of Given Number :" + to_string(a + b);
    }
    void Calculation(int a, int b, int c)
    {
        c = a + b;
    }
    int Calculation(int n)
    {
        // Using Recursion
        if (n == 0)
        {
            return 0;
        }
        int prevSum = Calculation(n - 1);
        return n + prevSum;
    }
    void Calculation()
    {
        int n, i;
        cout << "Enter value of n : " << endl;
        cin >> n;
        cout << "Table of Given Number : " << endl;
        for (i = 1; i <= 10; i++)
        {
            cout << i * n << " ";
        }
    }
};
int main()
{
    baseClass object;
    int a, b, n, c;
    cout << "Enter value of a : " << endl;
    cin >> a;
    cout << "Enter value of b : " << endl;
    cin >> b;
    cout << "Enter value of  n :" << endl;
    cin >> n;

    cout << object.Calculation(10, 20) << endl;
    cout << "Sum of n Number is : " << object.Calculation(n) << endl;
    object.Calculation(a, b, c);
    cout << c << endl;
    object.Calculation();
    return 0;
}