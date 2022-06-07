#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    int n=arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    int prev_1=arr[0][0];
    int prev_2=arr[0][1];
    for(int k=1;k<n;k++)
    {
        int curr_1=arr[k][0];
        int curr_2=arr[k][1];
        if(curr_1>prev_2)
        {
            vector<int> temp(2,0);
            temp[0]=prev_1;
            temp[1]=prev_2;
            ans.push_back(temp);
            prev_1=curr_1;
            prev_2=curr_2;
        }
        else
        {
            if(curr_2>prev_2)
            prev_2=curr_2;
        }
        
    }
    ans.push_back({prev_1,prev_2});
    return ans;
    // Write your code here.
}
