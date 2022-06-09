#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    int ans=1;
    x%=m;
    if(x==0) return 0;
    while(n)
    {
        if(n%2==1)
        {
            ans=(1LL*ans*x)%m;
        }
        n/=2;
        x=(1LL*x*x)%m;
    }
    return ans;
	// Write your code here.
}