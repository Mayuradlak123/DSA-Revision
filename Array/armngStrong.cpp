#include "bits/stdc++.h"
using namespace std;
// Ex : 153, 370, 371, 407
class isArmStrong
{
public:
    int getLength(int n)
    {
        int temp = 0, rev = 0, count = 0;
        while (n != 0)
        {
            temp = n % 10;
            rev = rev * 10 + temp;
            count++;
            n = n / 10;
        }
        return count;
    }
    bool check(int n)
    {
        int lenght = getLength(n);
        cout << "Lenght: " << lenght << endl;
        int temp, ans = 0, curr = n;
        while (curr)
        {
            temp = curr % 10;
            ans += pow(temp, lenght);
            curr = curr / 10;
        }
        cout << ans << endl;
        if (ans == n)
        {
            return true;
        }
        return false;
    }
};
int main(int argc, char const *argv[])
{
    isArmStrong object;

    int n;
    cout << "Enter Number for check : " << endl;
    cin >> n;
    bool check = object.check(n);
    cout << check << endl;
    if (check)
    {
        cout << "Given Number is ArmngStrong";
    }
    else
    {
        cout << "Given number is not amngstrong " << endl;
    }
    return 0;
}

/*
 bool check(int n)
    {
        int temp, ans = 0, curr = n;
        while (curr != 0)
        {
            temp = curr % 10;
            ans += pow(temp, 3);
            curr = curr / 10;
        }
        if (ans == n)
            return true;
        return false;
    }


*/