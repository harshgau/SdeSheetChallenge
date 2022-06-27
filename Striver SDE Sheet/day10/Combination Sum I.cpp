#include<bits/stdc++.h>

void f(vector<int> &a,int n,int sum,int ind,vector<int> &temp,vector<vector<int>> &ans)
{
    if(sum==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=ind;i<n;i++)
    {
        if(i>ind&&a[i]==a[i-1])
            continue;
        if(a[i]>sum)
            break;
        temp.push_back(a[i]);
        f(a,n,sum-a[i],i+1,temp,ans);
        temp.pop_back();
    }
    
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
    vector<vector<int>> ans;
    vector<int> temp;
    sort(arr.begin(),arr.end());
    f(arr,n,target,0,temp,ans);
    return ans;
	// Write your code here.
}
