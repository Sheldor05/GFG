// Given a sorted array arr[] of distinct integers. 
// Sort the array into a wave-like array and return it
// In other words, arrange the elements into a sequence such that 
// arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

// Input:
// n = 5
// arr[] = {1,2,3,4,5}
// Output: 2 1 4 3 5
// Explanation: Array elements after 
// sorting it in wave form are 
// 2 1 4 3 5.

#include <bits/stdc++.h>
using namespace std;

    class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
    int temp = 0;
    for (int i = 0; i<n-1; i+=2) {
        // if(arr[i+1]>=arr[1]&&i%2==0)
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
        }
    }
        
    }
};
