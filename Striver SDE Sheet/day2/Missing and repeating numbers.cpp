#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    sort(arr.begin(),arr.end());
    map<int,int> mp;
    int ans;
    
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            ans=i+1;
            break;
        }
    }
    int res;
    for(auto it:mp)
    {
        if(it.second>1)
            res=it.first;
    }
    
    if(res>ans)
        return {ans,res};
    else
    {
        for(int i=n;i>=ans;i--)
        {
            if(arr[i-1]!=i)
            {
                ans=i;
                break;
            }
        }
    }
    return {ans,res};
	// Write your code here 
	
}
