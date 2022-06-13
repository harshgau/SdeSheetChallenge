#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>a, int n, int K) {
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        int left=i+1;
        int right=n-1;
        while(left<right)
        {
            int x=a[left];
            int y=a[right];
            if(a[left]+a[right]+a[i]==K)
            {
                ans.push_back({a[left],a[i],a[right]});
                while(left<right&&a[left]==x)
                {
                    left++;
                }
                while(left<right&&a[right]==y)
                {
                    right--;
                }
            }
            else if(a[left]+a[right]+a[i]<K)
            {
                left++;
            }
            else
                right--;
            
        }
        while(i+1<n&&a[i]==a[i+1])
        {
            i++;
        }
    }
    return ans;
	// Write your code here.
}