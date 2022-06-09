#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    map<int,int> mp;
    
    int n=arr.size();
    for(auto i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second>floor(n/3))
        {
            ans.push_back(it.first);
        }
    }
    return ans;
    // Write your code here.

}