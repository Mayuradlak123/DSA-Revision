// Ex:1 - Input number: 5
// 	1 2 3 4 5
// 	2       4
// 	3       3
// 	4       2
// 	5 4 3 2 1
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter n : " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                cout << j << " ";
            }
            else if (j == 1)
            {
                cout << i << " ";
            }
            else if (j == n)
            {
                cout << n - i + 1 << " ";
            }
            else if (i == n)
            {
                cout << i - j + 1 << " ";
            }
            else
            {
                cout << "  ";
            }

            
        }

        cout << endl;
    }
}