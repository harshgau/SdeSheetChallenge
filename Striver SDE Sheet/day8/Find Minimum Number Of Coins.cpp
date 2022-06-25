int findMinimumCoins(int amount) 
{
    int ans=0;
    while(amount)
    {
        
        if(amount>=1000)
        {
            amount-=1000;
        }
        else if(amount>=500)
            amount-=500;
        else if(amount>=100)
            amount-=100;
        else if(amount>=50)
            amount-=50;
        else if(amount>=20)
            amount-=20;
        else if(amount>=10)
            amount-=10;
        else if(amount>=5)
            amount-=5;
        else if(amount>=2)
            amount-=2;
        else if(amount>=1)
            amount-=1;
        ans++;
    }
    return ans;
    // Write your code here
}
