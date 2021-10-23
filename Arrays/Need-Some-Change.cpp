// Given an array arr of n positive integers. 
// The task is to swap every ith element of the array with (i+2)th element.
// Input:
// n = 5
// arr[] = 1 2 3 4 5
// Output:
// 3 4 5 2 1
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        int temp =0;
        for (int i=0; i<sizeof_array-2;i++){
            temp =arr[i];
            arr[i] = arr[i+2];
            
            arr[i+2]=temp;
        }
    }
};