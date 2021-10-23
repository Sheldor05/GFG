// Given an array of size N consisting of only 0's and 1's.
// The array is sorted in such a manner that all the 1's are
// placed first and then they are followed by all the 0's.
// Find the count of all the 0's.

// Input:
// N = 12
// Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 3
// Explanation: There are 3 0's in the given array.

#include <bits/stdc++.h>
using  namespace std;
class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int count=0;
        for(int i =0; i<n;i++){
            if(arr[i]==0){
                count++;
            }
        }
            return count;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
