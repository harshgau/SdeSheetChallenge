#include<bits/stdc++.h>
bool comp(pair<int,int>&a,pair<int,int>&b)
{
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    int n=start.size();
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        v[i]={start[i],finish[i]};
    }
    sort(v.begin(),v.end(),comp);
    int ans=1;
    int mini=v[0].second;
    for(int i=1;i<n;i++)
    {
        int fst=v[i].first;
        int scnd=v[i].second;
        if(mini<=fst)
        {
            ans++;
            mini=scnd;
        }
        else
            mini=min(mini,scnd);
        
//         cout<<fst<<" "<<scnd<<endl;
//         int j;
//         for(j=i+1;j<n;j++)
//         {
//             if(v[j].second>=v[i].first)
//                 break;
//         }
//         ans=max(ans,n-j);
    }
    return ans;
    
    // Write your code here.
}