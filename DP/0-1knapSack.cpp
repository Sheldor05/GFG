    // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    vector<vector<int>> dp;
    //Function to return max value that can be put in knapsack of capacity W.
     int util(int W, int wt[], int val[], int n){
     
        if(n==0||W==0) return 0;//base cond
        
        if(dp[W][n]!=-1) return dp[W][n];
        
        if(wt[n-1]<=W)
             dp[W][n] = max(val[n-1]+util(W-wt[n-1],wt,val,n-1),util(W,wt,val,n-1));
        
        else
            dp[W][n] = util(W,wt,val,n-1);
            
        return dp[W][n];
    }
   
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       dp = vector<vector<int>>(W+1,vector<int>(n+1,-1));
       return util(W,wt,val,n);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends