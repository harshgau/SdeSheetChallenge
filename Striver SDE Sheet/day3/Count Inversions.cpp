#include <bits/stdc++.h> 
long long merge(long long a[],int l,int m,int r)
{

    int i=l,j=m+1,k=0;
    long long cnt=0;
    long long b[(r-l+1)];
    while(i<=m&&j<=r)
    {
        if(a[i]>a[j])
            {
                cnt+=(m-i+1);
                b[k++]=a[j++];
            }
            else
            {
                b[k++]=a[i++];
            }
    }
    if(i>m)
    {
        while(j<=r)
        {
            b[k++]=a[j++];
        }
    }
    else
    {
        while(i<=m)
        {
            b[k++]=a[i++];
        }
    }
    j=0;
    for(int i=l;i<=r;i++)
    {
        a[i]=b[j++];
    }
    return cnt;
}
long long ms(long long a[],int l,int r)
{
    long long ans=0;
    if(l<r)
    {
        int m=(l+(r-l)/2);
        ans=ms(a,l,m);
        ans+=ms(a,m+1,r);
        ans+=merge(a,l,m,r);
    }
    return ans;
}

long long getInversions(long long *a, int n){
   
    return ms(a,0,n-1);
    // Write your code here.
}