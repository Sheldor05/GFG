// Given an array A[] of size n. The task is to find the largest element in it.

// Input:
// n = 5
// A[] = {1, 8, 7, 56, 90}
// Output:
// 90

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int temp =arr[0];
        for (int i=0;i<arr.size();i++){
            if(arr[i]>temp){
                temp = arr[i];
            }
        }
        return temp;
    }
};

