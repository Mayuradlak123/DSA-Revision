#include "bits/stdc++.h"
using namespace std;

class KadanSAlgorithm
{
public:
    int maxSum(int n, int *arr)
    {
        int sum = 0, ans = INT_MIN, i,start,end;
        for (i = 0; i < n; i++)
        {
            sum+=arr[i];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
        }
        return ans;
    }
};
//  -2, -3, 4, -1, -2, 1, 5, -3
// answer: 7
//{-1, 2, 3, -4, 2}
//answer : 5
int main(int argc, char const *argv[])
{
    KadanSAlgorithm object;
    int i, n;
    cout << "Enter size of array : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter Element of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printf("Maximum Contiguous Sum is : %d ", object.maxSum(n, arr));

    return 0;
}
