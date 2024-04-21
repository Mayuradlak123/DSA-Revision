#include "bits/stdc++.h"
using namespace std;
/*
Leetcode:  https://leetcode.com/problems/trapping-rain-water/
 6                          4
arr[] = {3,0,0,2,0,4}      {7,4,0,9}
Output:
10                           10
arr[]=7 4 0 9
Output=10
*/
int rainWater(int n, int arr[])
{
    int ans = 0, i, j, left, right;

    int leftMax = INT_MIN, rightMax = INT_MIN, left = 0, right = n - 1, ans = 0;
    while (left < right)
    {
        leftMax = max(arr[left], leftMax);
        rightMax = max(arr[right], rightMax);
        if (leftMax > rightMax)
        {
            ans += abs(rightMax - arr[right]);
            right--;
        }
        else
        {
            ans += abs(leftMax - arr[left]);
            left++;
        }
    }
    return ans;
}
int main()
{
    int i, n;
    cout << "Enter n :" << endl;
    cin >> n;
    int arr[n];
    cout << " Enter array Element: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = rainWater(n, arr);
    cout << "Water trapping : " << ans << endl;
    return 0;
}