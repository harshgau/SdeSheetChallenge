#include<bits/stdc++.h>
void f(int ind,vector<int> &arr,vector<vector<int>> &ans,vector<int>&ds)
{
    int n=arr.size();
    ans.push_back(ds);
    for(int i=ind;i<n;i++)
    {
        if(i!=ind&&arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        f(i+1,arr,ans,ds);
        ds.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int>ds;
    sort(arr.begin(),arr.end());
    f(0,arr,ans,ds);
    return ans;
    // Write your code here.
}