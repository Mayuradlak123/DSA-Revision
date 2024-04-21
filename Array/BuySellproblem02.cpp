#include "bits/stdc++.h"
using namespace std;
//price[] = {3, 4, 1, 5}
// Output:
// 5
// Leetcode : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii
class stockBuySellProblem02
{
public:
    int calculateProfit(int *arr,int n){
        int ans=0,i;
        for (i=0;i<n;i++){
            if(arr[i]>arr[i-1]){
                ans+=(arr[i]-arr[i-1]);
            }
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    stockBuySellProblem02 object;
    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array :" << endl;
    for (i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int ans = object.calculateProfit(arr, n);
    cout << " Maximum Profit in this Stock: " << ans << endl;

    return 0;
}

/*
int calculateProfit(int *arr, int n)
    {
        int maxProfit = 0, i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                maxProfit += (arr[i] - arr[i - 1]);
            }
        }
        return maxProfit;
    }
*/