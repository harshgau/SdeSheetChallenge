#include <bits/stdc++.h> 
string fourSum(vector<int> a, int target, int n) {
    unordered_map<int,pair<int,int>> mp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mp[a[i]+a[j]]={i,j};
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++){
            int sum=a[i]+a[j];
            if(mp.find(target-sum)!=mp.end())
            {
                auto it=mp[target-sum];
                int x=it.first;
                int y=it.second;
                if(i!=x&&i!=y&&j!=x&&j!=y)
                    return "Yes";
            }
        }
    }
    return "No";
    // Write your code here.
}
