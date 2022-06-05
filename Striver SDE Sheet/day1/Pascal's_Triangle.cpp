#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ans;
    vector<long long> prev;
    for(int i=0;i<n;i++)
    {
        vector<long long> temp(i+1,1);
        if(i==0)
        ans.push_back({1});
        else if(i==1)
        {
            ans.push_back(temp);
        }
        else
        {
            for(int j=1;j<i;j++)
            {
                temp[j]=prev[j]+prev[j-1];
            }
            ans.push_back(temp);
        }
        prev=temp;
        
    }
    return ans;
  // Write your code here.
}
