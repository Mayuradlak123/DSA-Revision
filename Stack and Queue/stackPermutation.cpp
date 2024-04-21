#include "bits/stdc++.h"
using namespace std;

class stackPermutation
{
public:
    inline bool checkStackPermutation(int *inp, int *opt, int n)
    {
        int i, j;
        queue<int> input, output;
        for (i = 0; i < n; i++)
        {
            input.push(inp[i]);
        }
        for (i = 0; i < n; i++)
        {
            output.push(opt[i]);
        }

        stack<int> ans;
        while (!input.empty())
        {
            int element = input.front();
            input.pop();
            if(element==output.front()){
                output.pop();
                while(!ans.empty()){
                 if(!ans.empty()==output.front())   {
                    ans.pop();
                    output.pop();
                 }
                }
            }
            else{
                ans.push(element);
            }
        }
        return  (ans.empty() and input.empty());
    }
};
int main(int argc, char const *argv[])
{
    stackPermutation object;
    int n, i, j;
    cout << "Enter size of input and output array : " << endl;
    cin >> n;
    int input[n], output[n];
    cout << "Enter input elemenmt array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << "Enter output elemenmt array: " << endl;
    for (j = 0; j < n; j++)
    {
        cin >> output[j];
    }
    object.checkStackPermutation(input, output, n) ? cout << "Stack is Permutation : " << endl : cout << "Stack is Not Permutation" << endl;
    return 0;
}
