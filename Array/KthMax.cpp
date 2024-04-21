

// Leetcode : https://leetcode.com/problems/kth-largest-element-in-an-array/

#include "bits/stdc++.h"
using namespace std;
//Time Complexity O(n log k)
class kthMaxElement
{
public:
    int findKthMaxElement(int n, int k, int *arr)
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        int i;
        for (i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};
int main(int argc, char const *argv[])
{
    int i, n, k;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    kthMaxElement object;
    cout << "Enter k" << endl;
    cin >> k;

    int ans = object.findKthMaxElement(n, k, arr);
    printf("Kth Max Element %d ", ans);
    return 0;
}
