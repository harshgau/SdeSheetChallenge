#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second>floor(n/2))
        {
            return it.first;
        }
    }
    return -1;
	// Write your code here.
}