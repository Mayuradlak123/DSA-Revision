/*

Ex: 2:  Input number - 5 (The pattern should include all the numbers till 5^2 = 25)
    01 02 03 04 05
    10 09 08 07 06
    11 12 13 14 15
    20 19 18 17 16
    21 22 23 24 25


output
01 02 03 04 05
10 09 08 07 06
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
*/
// C++
#include "bits/stdc++.h"
using namespace std;

int main()
{
    float n, i, j;
    bool k=true;
    cout << "Enter n " << endl;
    cin >> n;
    for (i = 1; i <=(n * n); i = i + n)
    {

        if (k )
        {
            for (j = i; j < i + n; j++)
            {
                if (j < 10)
                {
                    cout << "0" << j << " ";
                }
                else
                {
                    cout << j << " ";
                }
            }
          
            k=false;
        }
        else
        {

            for (j = i + n - 1; j >= i; j--)
            {
                if (j < 10)
                {
                    cout << "0" << j << " ";
                }
                else
                {
                    cout << j << " ";
                }
            }
          
            k=true;
        }
        cout << endl;
    }

    return 0;
}