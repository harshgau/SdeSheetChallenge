int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int count=1,i=1,j=0;
    int ans=1;
    while(i<n&&j<n)
    {
        if(dt[j]<at[i])
        {
            j++;
            count--;
        }
        else
        {
            i++;
            count++;
        }
        ans=max(ans,count);
    }
    
    return ans;
    // Write your code here.
}