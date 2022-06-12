#include <bits/stdc++.h> 
int subarraysXor(vector<int> &a, int m)
{
    int ans=0;
    int n=a.size();
    map<int,int> mp;
    vector<int> v(n);
    v[0]=a[0];
    for(int i=1;i<n;i++)
    {
        v[i]=v[i-1]^a[i];
    }
    for(int i=0;i<n;i++)
    {
        int temp=m^v[i];
        ans+=mp[temp];
        if(v[i]==m)
        {
            ans++;
        }
        mp[v[i]]++;
    }
    return ans;
    //    Write your code here.
}