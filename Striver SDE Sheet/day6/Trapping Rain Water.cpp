#include <bits/stdc++.h> 
long getTrappedWater(long *a, int n){
    long ans=0;
    int i=0,j=n-1;
    long left=0,right=0;
    while(i<j)
    {
        left=max(left,a[i]);
        right=max(right,a[j]);
        if(left<right)
        {
            ans+=left-a[i];
            i++;
        }
        else
        {
            ans+=right-a[j];
            j--;
        }
    }
    return ans;
    // Write your code here.
}