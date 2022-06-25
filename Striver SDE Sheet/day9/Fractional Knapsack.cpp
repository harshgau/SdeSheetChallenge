#include<bits/stdc++.h>
bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    double r1=(double)a.first/(double)b.first;
    double r2=(double)a.second/(double)b.second;
    return r1<r2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    double ans=0;
    sort(items.begin(),items.end(),cmp);
    for(int i=0;i<n;i++)
    {
        if(w>0)
        {
            if(w>=items[i].first)
            {
                w-=items[i].first;
                ans+=(double)items[i].second;
            }
            else
            {
                ans+=(double)items[i].second*(double)w/(double)items[i].first;
                w=0;
            }
        }
        else break;
    }
    return ans;
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
}