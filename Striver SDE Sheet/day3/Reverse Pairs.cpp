#include <bits/stdc++.h> 
int merge(vector<int> &a,int l,int m,int r)
{
    int i=l;
    int j=m+1;
    int k=0,cnt=0;
    vector<int> b(r-l+1);
    int x=l,y=m+1;
    while(x<=m)
    {
        while(y<=r&&a[x]>2*a[y])
        {
            y++;
        }
        cnt+=(y-m-1);
        x++;
    }
    while(i<=m&&j<=r)
    {
        if(a[i]>a[j])
        {
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
int ms(vector<int> &a,int l,int r)
{
    int ans=0;
    if(l<r)
    {
        int m=(l+r)/2;
        ans=ms(a,l,m);
        ans+=ms(a,m+1,r);
        ans+=merge(a,l,m,r);
    }
    return ans;
}
int reversePairs(vector<int> &arr, int n){
    return ms(arr,0,n-1);
	// Write your code here.	
}