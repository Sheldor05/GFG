#include <bits/stdc++.h>
using namespace std;
// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
     void swap(vector<vector<int> >&mat, int i, int j)
        {
            int temp = mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]= temp;
        }
    void transpose(vector<vector<int> >& matrix, int n)
    { 
         int temp =0; int m= matrix.size(); int col= matrix[0].size();
        for(int i=0; i<m; i++){
            for(int j = i ; j<col; j++){
                // temp = matrix[i][j];
                // matrix[i][j]=matrix[j][i];
                // matrix[j][i]=temp;
                    swap(matrix,i,j);   
// 
        // void swap(int mat[][], int i, int j)
        // {
        //     int temp = mat[i][j];
        //     mat[i][j]=mat[j][i];
        //     mat[j][i]= temp;

        // }
        // void trans (int matrix, int i, int j){
        //     for(int i =0; i<matrix.size(); i++){
        //         for(int j =0;j<matix[0].size();j++){
        //             swap(matrix,i,j);   
        //         }
        //     }
        // }
            }
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends