#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

vector<int> twoSum(int *arr, int x, int n)
{
    vector<int> ans;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    cout << "Count of arguments : " << argc << endl;
    int i, n, x;
    cout << " Enter n: " << endl;
    cin >> n;

    cout << "Enter array element: " << endl;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target value : " << endl;
    cin >> x;
    cout << "Two sum index: " << endl;
    vector<int> ans = twoSum(arr,x,n);
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
