#include <bits/stdc++.h> 
long long sum(int arr[],int l,int m,int h)
{
    long long sum=0;
    long long left_sum=0,right_sum=0;
    for(int i=m;i>=l;i--)
    {
        sum+=arr[i];
        if(sum>left_sum)
        {
            left_sum=sum;
        }
    }
    sum=0;
    for(int i=m+1;i<=h;i++)
    {
        sum+=arr[i];
        if(sum>right_sum)
            right_sum=sum;
    }
    return max({left_sum+right_sum,left_sum,right_sum});
}
long long f(int arr[], int l, int h)
{
    if (l == h)
        return arr[l];

    int m = (l + h) / 2;
 
    return max({f(arr, l, m),
               f(arr, m + 1, h),
               sum(arr, l, m, h)});
}
long long maxSubarraySum(int arr[], int n)
{
    int l=0,h=n-1;
    return f(arr,l,h);
        
    
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}