#include "bits/stdc++.h"
using namespace std;

void createTringle()
{
    int i, j;
    for (i = 1; i <=5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main(int argc, char **argv)
{
    createTringle();
    return 0;
}
/*
Output
*
**
***
****
*/