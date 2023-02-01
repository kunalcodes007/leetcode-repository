//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
      
      //upper half
      for(int i=0;i<n;i++){
          for(int j=0;j<=i;j++){
              cout<<"*"<<' ';
          }cout<<endl;
      }
      
      //lower half
      for(int k=n-1;k>=1;k--){
          for(int l=k;l>=1;l--){
          
              cout<<"*"<<' ';
              
          }cout<<endl;
          }
      }
    };

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends