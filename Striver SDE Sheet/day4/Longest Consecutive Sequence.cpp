#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int cnt=1,ans=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]==0)
            continue;
        else if(arr[i]-arr[i-1]==1)
        {
            cnt++;
        }
        else
            cnt=1;
        ans=max(ans,cnt);
    }
    return ans;
    // Write your code here.
}