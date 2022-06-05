#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &a, int n)
{
    int j;
    int i;
    if(n==1)
        return a;
    bool flag=true;
    int mini=INT_MAX;
    for(i=n-2;i>=0;i--)
    {
//         if(mini>a[i+1])
//         {
//             mini=min(mini,a[i+1]);
//             j=i+1;
//         }
        if(a[i]<a[i+1])
        {
            flag=false;
            break;
        }
    }
    for(j=n-1;j>i;j--)
    {
        if(a[j]>a[i])
        {
            break;
        }
    }
    if(flag)
    {
        reverse(a.begin(),a.end());
        return a;
    }
        
//     cout<<i<<" "<<j<<endl;
    swap(a[i],a[j]);
    reverse(a.begin()+i+1,a.end());
    
    
    return a;
    //  Write your code here.
}