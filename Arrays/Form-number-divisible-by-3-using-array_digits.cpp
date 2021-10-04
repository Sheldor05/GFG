// Given an array arr of integers of length N, 
// the task is to find whether it’s possible to 
// construct an integer using all the digits of these 
// numbers such that it would be divisible by 3.
// If it is possible then print “1” and if not print “0”.

// Input: N = 3
// arr = {40, 50, 90}
// Output: 1
// Explaination: One such number is 405900.

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        int sum = 0;
        for(int i = 0; i<N; i++){
            sum+=arr[i];
            if(sum%3==0){
                return 1;
            }
        }
        return 0;
    }
};