#include "bits/stdc++.h"
using namespace std;

string getMultiply(string str1, string str2)
{
    return to_string(stoi(str1) * stoi(str2));
}
int main(int argc, char const *argv[])
{
    string str1, str2;
    cout << "Enter  str1 " << endl;
    cin >> str1;
    cout << "Enter  str1 " << endl;
    cin >> str2;

    cout << "Multiply of given Number : " << getMultiply(str1, str2) << endl;
    return 0;
}
