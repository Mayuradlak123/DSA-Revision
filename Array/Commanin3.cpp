#include "bits/stdc++.h"
using namespace std;
class findCommonIn3Array
{
public:
    vector<int> getCommonElement(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
    {
        vector<int> ans;
        unordered_set<int> set1(arr1.begin(), arr1.end()), set2(arr2.begin(), arr2.end()), set3(arr3.begin(), arr3.end());

        for (auto x : set1)
        {
            if (set2.count(x) && set3.count(x))
            {
                ans.push_back(x);
            }
        }
        return ans;
    }
};
int main()
{
    int i, k, j, n1, n2, n3, temp;
    cout << "Enter size of array 1 : " << endl;
    cin >> n1;
    cout << "Enter size of array 2 : " << endl;
    cin >> n2;
    cout << "Enter size of array 3 : " << endl;
    cin >> n3;
    vector<int> arr1, arr2, arr3;
    cout << "Enter Element of array " << endl;
    for (i = 0; i < n1; i++)
    {
        cin >> temp;
        arr1.push_back(temp);
    }

    cout << "Enter Element of array 2 : " << endl;
    for (i = 0; i < n2; i++)
    {

        cin >> temp;
        arr2.push_back(temp);
    }
    cout << "Enter Element of array 3 :" << endl;
    for (i = 0; i < n3; i++)
    {

        cin >> temp;
        arr3.push_back(temp);
    }
    findCommonIn3Array object;
    vector<int> ans = object.getCommonElement(arr1, arr2, arr3);

    cout << "Common Element in 3 array :" << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}