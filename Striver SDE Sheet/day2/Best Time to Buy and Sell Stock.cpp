#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int curr=INT_MAX;
    int sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr=min(curr,prices[i]);
        sum=max(sum,prices[i]-curr);
    }
    if(sum<0)
        sum=0;
    return sum;
    // Write your code here.
}