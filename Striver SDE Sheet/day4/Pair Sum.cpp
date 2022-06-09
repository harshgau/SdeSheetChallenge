#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &a, int s){
    vector<vector<int>> ans;
    int n=a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==s)
            {
                ans.push_back({a[i],a[j]});
            }
        }
    }
    return ans;
   // Write your code here.
}