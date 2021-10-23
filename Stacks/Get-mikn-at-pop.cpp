// Now, we'll try to solve a famous stack problem.
// You are given an array A of size N.
// You need to first push the elements of the array into a stack and then print minimum in the stack at each pop.

// Example 1:

// Input:
// N = 5
// A = {1 2 3 4 5}
// Output: 
// 1 1 1 1 1

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    stack <int> s;

    for(int i=0;i<n;i++) {
        
        if(s.empty()) s.push(arr[i]);
        else{
            if(s.top()<arr[i]) s.push(s.top());
            else s.push(arr[i]);
        }
        
    }
    return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
while(!s.empty()) cout<<s.top()<<" ",s.pop();
}

// { Driver Code Starts.
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
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends