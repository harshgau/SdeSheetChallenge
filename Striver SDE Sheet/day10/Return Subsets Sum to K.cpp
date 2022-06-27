vector<vector<int>> ans;

void f(vector<int> &arr,int sum,int n,int i,vector<int> &temp)
{
   if(sum==0)
       ans.push_back(temp);
    if(i>=n) return;
    for(;i<n;i++)
    {
        temp.push_back(arr[i]);
        f(arr,sum-arr[i],n,i+1,temp);
        temp.pop_back();
    }
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<int> temp;
    f(arr,k,n,0,temp);
    return ans;
    // Write your code here.
}