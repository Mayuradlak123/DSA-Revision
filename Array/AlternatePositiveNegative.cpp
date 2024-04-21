#include "bits/stdc++.h"
using namespace std;

class alternateSorting
{
public:
    void Alternate(int n, int *arr)
    {
        int i = 0, j = n - 1;
        sort(arr, arr + n);
        vector<int> ans;
        while (i < j)
        {
            ans.push_back(arr[j--]);
            ans.push_back(arr[i++]);
        }

        for (auto x: ans){
          cout <<x<<" ";
        }
        if(n%2!=0){
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    alternateSorting obj;
    int i, n;
    cout << "Enter n: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of array : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Alternate array : " << endl;
    obj.Alternate(n, arr);
    return 0;
}

/*
void Alternate(int n,int arr[]){
    int i=0,j=n-1;

    vector<int>v;
    
    sort(arr,arr+n);
    while(i<j){
        v.push_back(arr[i++]);
        v.push_back(arr[j--]);
    }
    cout << "After Alternate Sorting  : "<<endl;
    for (auto x :v){
        cout <<x<<" ";
    }
}
*/