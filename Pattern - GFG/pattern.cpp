//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
      
      int space_1=n-1;
      int space_2=0;
      
      //UPPER HALF
      for(int i=1;i<=n;i++){
      for(int sp=0;sp<space_1;sp++){
          cout<<" ";
      }space_1--;
          for(int j=1;j<=i;j++){
              cout<<"*"<<' ';
          }
          cout<<endl;
      }
      //LOWER HALF
       for(int k=n;k>=1;k--){
           for(int s=0;s<space_2;s++){
               cout<<" ";
           }
           space_2++;
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends