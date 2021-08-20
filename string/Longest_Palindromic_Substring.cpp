// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string s){
        // code here 
        // if(s.length()==1)
        // return s;
        int count = 0;
        string ans;
        for(int i=0;i<s.size();i++){
            int k=i-1;
            int j=i+1;
            int t=1;
            string temp;
            temp+=s[i];
            while(k>=0 && j<s.size() && s[j]==s[k]){
                temp = s[k]+temp+s[j];
                t+=2;
                j++;
                k--;
            }
            if(t>count){
                count =t;
                ans = temp;
            }
        
        }
        int i=0, j=1;    
        while(i<s.size()-1)
            {
                int k=i;
                int l=j;
                string temp;
                int t=0;
                while(k>=0 && l<s.size()&& s[k]==s[l]){
                    temp = s[k]+temp+s[l];
                    l++;
                    k--;
                    t+=2;
                }
                if(t>count){
                    ans=temp;
                    count =t;
                }
                i++;
                j++;
            }
        return ans;
    }

};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends