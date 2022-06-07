#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i=m-1;
    int j=n-1;
    int ind=m+n-1;
    while(i>=0&&j>=0)
    {
        if(arr1[i]<arr2[j])
        {
            arr1[ind]=arr2[j];
            j--;
        }
        else
        {
            arr1[ind]=arr1[i];
            i--;
        }
        ind--;
    }
    while(j>=0){
            arr1[ind] = arr2[j];
            j--;
            ind--;
        }
        return arr1;
	// Write your code here.
}