#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int count_0=0,count_1=0,count_2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count_0++;
        }
        else if(arr[i]==1)
            count_1++;
        else
            count_2++;
    }
        for(int i=0;i<n;i++)
        {
            if(i<count_0)
                arr[i]=0;
            else if(i<count_0+count_1)
                arr[i]=1;
            else
                arr[i]=2;
        }
    
   //   Write your code here
}