#include "bits/stdc++.h"
using namespace std;

int longestCommonSubstring(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();
    int maxLength = 0;  
    
    for(int i=0;i<n;i++){
        for (int j=0; j<m; j++){
            int len=0;
            int x=i;
            int y=j;
            while (x<n && y<j && s1[x]==s2[y] ){
                x++;
                y++;
                len++;
            }
            maxLength =max(len,maxLength);
        }
    }
    return maxLength;

}
int main()
{
    string str1, str2;
    cout << "enter an 1st String : " << endl;
    cin >> str1;
    cout << "enter 2nd sreing : " << endl;
    cin >> str2;
    int ans = longestCommonSubstring(str1, str2);
    printf("Longest Comman sequence is : %d ", ans);
    return 0;
}