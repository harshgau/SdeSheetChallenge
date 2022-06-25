#include<bits/stdc++.h>
void solve(vector<int>&arr,int i,int sum,vector<int>&v)
{
    if(i<0)
    {
        v.push_back(sum);
        return;
    }
    solve(arr,i-1,sum,v);
    solve(arr,i-1,sum+arr[i],v);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int>v;
    int n=num.size();
    solve(num,n-1,0,v);
    sort(v.begin(),v.end());
    return v;
    
    // Write your code here.
}