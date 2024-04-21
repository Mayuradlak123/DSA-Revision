#include "bits/stdc++.h"
using namespace std;

class Stack
{
public:
    vector<int> nextSmaller(int *arr, int n)
    {
        vector<int> ans;
        bool f = 0;
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    ans.push_back(arr[j]);
                    f = 1;
                    break;
                        //if the current number is smaller than all numbers after it then push
                }
                else
                {
                    if (j == n - 1 and f == 0)
                    {
                        ans.push_back(-1);
                    }
                }
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
int main()
{
    Stack object;
    int i, n;
    cout << "Enter length of array  : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element or array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = object.nextSmaller(arr, n);
    cout << "Next Smaller Elements :" << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}