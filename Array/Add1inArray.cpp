#include "bits/stdc++.h"
using namespace std;
// Leetcode: https://leetcode.com/problems/plus-one/
// class add1inArray{
//   public:
//   vector<int> add1(int *arr, int n){
//     int temp=0,i,rem=0;
//     for ( i = 0; i <n; i++){
//         temp=(temp*10)+arr[i];
//     }
//     temp=temp+1;
//      vector<int>v;
//     for ( i = 0; i < n; i++) {
//         rem=temp%10;
//         v.push_back(rem);
//         temp=temp/10;
//     }
//     reverse(v.begin(),v.end());
//     return v;
//   }
// };
class add1inArray
{
public:
    vector<int> add1InArray(int *arr, int n)
    {
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            temp = temp * 10 + arr[i];
        }
        vector<int> ans;
        temp = temp + 1;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(temp % 10);
            temp = temp / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    add1inArray obj;
    int i, n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Elemement of Array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "After add 1 in array : " << endl;
    vector<int> ans = obj.add1InArray(arr, n);

    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}

/*
Input : [4,6,7,7,8]
Output : 46779
*/