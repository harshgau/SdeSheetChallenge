#include<bits/stdc++.h>
bool comp(vector<int> &a,vector<int> &b)
{
    return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &v)
{
    sort(v.begin(),v.end(),comp);
    int cnt=0,sum=0;
    int n=v.size();
    int k=v[0][0];
    for(int i=0;i<n;i++)
    {
        k=max(k,v[i][0]);
    }
    vector<int> a(k+1,0);
    for(int i=0;i<n;i++)
    {
        for(int j=v[i][0];j>0;j--)
        {
            if(a[j]==0)
            {
                a[j]=1;
                sum+=v[i][1];
                break;
            }
        }
    }
    return sum;
    
    // Write your code here
}
