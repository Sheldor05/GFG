// Given an array with repeated elements, the task is
// to find the maximum distance between two occurrences of an element.

// Input
// n= 6
// arr = {1, 1, 2, 2, 2, 1}

// Output
// 5
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int maxDistance(int arr[], int n)
    {
        unordered_map <int,pair<int,int>> mp;
        for(int i = 0; i<n; i++){
            if(mp.find(arr[i])==mp.end()){
                mp[i]={i,i};
            }
            else{
                if(i<mp[arr[i]].first) mp[arr[i]].first=i;
                if(i>mp[arr[i]].second) mp[arr[i]].second=i;
                // mp[i].second
            }
        }
        int ans=INT_MIN;
        for(auto p:mp){
            ans=max(ans,p.second.second-p.second.first);
        }
        return ans;

    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}