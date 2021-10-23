
// You are given an array arr of size N.
// You need to push the elements of the
// array into a stack and then print them while popping.

// Example 1:

// Input:
// n = 5
// arr = {1 2 3 4 5}
// Output:
// 5 4 3 2 1

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);


void _pop(stack<int>s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}



stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
stack<int> s;
for(int i =0; i<n; i++) s.push(arr[i]);
return s;

}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _pop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends